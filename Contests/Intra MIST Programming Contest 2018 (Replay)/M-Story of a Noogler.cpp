#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 2500000

long long factorial[MAX], inverse_factorial[MAX];

long long bigmod_using_extended_euclid(long long n, long long m){
    long long hold,x=0,y=1;
    while(n>1){
        long long q=n/m;
        hold=m;
        m=n%m;
        n=hold;
        hold=x;
        x=y-q*x;
        y=hold;
    }
    if(y<0) y+=MOD;
    return y;
}

void calculate_using_extended_euclid(){
    factorial[0] = inverse_factorial[0] = 1;

    for(int i=1; i<MAX; i++){
        factorial[i] = factorial[i-1] * i % MOD;
        inverse_factorial[i] = inverse_factorial[i-1] * bigmod_using_extended_euclid(i, MOD) % MOD;
    }
}

int main(){
    calculate_using_extended_euclid();
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        int s[n], d[n];

        for(int i=0; i<n; i++)
            scanf("%d",&s[i]);

        for(int i=0; i<n; i++)
            scanf("%d",&d[i]);

        long long ans = 1;
        int total = 0;

        for(int i=0; i<n; i++){
            int val = abs(s[i]-d[i]);
            total += val;
            ans = (ans%MOD * inverse_factorial[val] % MOD) % MOD;
        }

        ans = (ans%MOD * factorial[total]%MOD)%MOD;

        printf("Case %d: %lld\n",++Case,ans);
    }

    return 0;
}
