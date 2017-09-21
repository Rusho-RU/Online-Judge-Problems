#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 100
long long factorial[MAX+1],inv_fact[MAX+1];

long long BigMOD(long long a, long long b){
    long long ans=1,hold=a%MOD;
    while(b){
        if(b & 1) ans=(ans*hold)%MOD;
        hold=(hold*hold)%MOD;
        b>>=1;
    }
    return ans;
}

long long nCr(long long n, long long r){
    long long hold=((factorial[n])%MOD*(inv_fact[n-r])%MOD*(inv_fact[r])%MOD)%MOD;
    printf("%lld\n",hold);
    return hold;
}

int main(){
    factorial[0]=inv_fact[0]=1;
    for(int i=1;i<=MAX;i++){
        factorial[i]=factorial[i-1]*i%MOD;
        inv_fact[i]=(inv_fact[i-1]*BigMOD(i,MOD-2))%MOD;
    }

    long long n,r;
    while(scanf("%lld %lld",&n,&r)==2){
        cout<<nCr(n,r)<<endl;
    }
}

