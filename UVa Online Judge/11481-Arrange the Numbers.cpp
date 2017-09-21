#include <bits/stdc++.h>
using namespace std;

#define MAX 1001
#define MOD 1000000007

long long factorial[MAX],inv_fact[MAX];

long long BigMOD(long long a, long long b){
    if(b==0) return 1;

    if(b&1) return a*BigMOD(a,b-1) %MOD;

    long long c=BigMOD(a,b/2);
    return c*c %MOD;
}

void calculate(){
    factorial[0]=inv_fact[0]=1;
    for(int i=1;i<MAX;i++){
        factorial[i]=factorial[i-1]*i%MOD;
        inv_fact[i]=inv_fact[i-1]*BigMOD(i,MOD-2) %MOD;
    }
}

long long nCr(int n, int r){
    return factorial[n]%MOD * inv_fact[r]%MOD * inv_fact[n-r]%MOD %MOD;
}

int main(){
    calculate();
    int t,Case=0;
    scanf("%d",&t);
    while(t--){
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        int r=m-k;
        long long ans=factorial[n-k];
        for(int i=1;i<=r;i++){
            long long hold=nCr(r,i)%MOD * factorial[n-k-i]%MOD %MOD;
            if(i&1) ans=((ans%MOD - hold%MOD)+MOD)%MOD;
            else ans=(ans%MOD + hold%MOD)%MOD;
        }

        ans=nCr(m,r)%MOD * ans%MOD %MOD;

        printf("Case %d: %lld\n",++Case,ans);
    }
    return 0;
}
