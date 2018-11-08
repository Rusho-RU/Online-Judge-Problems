#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 100050

long long factorial[MAX], inverse_factorial[MAX];

long long BigMOD(long long a, long long b){
    if(b==0)
        return 1;

    if(b&1)
        return a * BigMOD(a, b-1) % MOD;

    long long temp = BigMOD(a, b/2);
    return temp * temp % MOD;
}

void calculate(){
    factorial[0] = inverse_factorial[0] = 1;

    for(int i=1; i<MAX; i++){
        factorial[i] = factorial[i-1] * i % MOD;
        inverse_factorial[i] = inverse_factorial[i-1] * BigMOD(i, MOD-2) % MOD;
    }
}

long long nCr(int n, int r){
    return (((factorial[n]%MOD * inverse_factorial[n-r]%MOD)%MOD * inverse_factorial[r]%MOD))%MOD;
}

int main(){
    calculate();
    int n, k;

    while(scanf("%d%d",&n,&k)==2){
        long long ans = nCr(n, k);

        int data[n-1];

        for(int i=0; i<n-1; i++)
            scanf("%d",&data[i]);

        sort(data, data+n-1);

        int cnt = 1;
        for(int i=1; i<n-1; i++){
            if(data[i]==data[i-1])
                cnt++;
            else{
                ans -= nCr(cnt, k);
                cnt=1;
            }
        }

        ans -= nCr(cnt, k);

        printf("%lld\n",ans);
    }

    return 0;
}
