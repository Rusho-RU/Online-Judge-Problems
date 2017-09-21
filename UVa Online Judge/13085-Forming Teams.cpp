#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 1000001

long long factorial[MAX+1],inv_fact[MAX+1];

long long modular_inv(long long n){
    long long m=MOD,hold,x=0,y=1,q;
    while(n>1){
        q=n/m;
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

long long BigMOD(long long a, long long b){
    long long ans=1,hold=a%MOD;
    while(b){
        if(b & 1) ans=(ans*hold)%MOD;
        hold=(hold*hold)%MOD;
        b>>=1;
    }
    return ans;
}

void find_factorial(){
    factorial[0]=inv_fact[0]=1;
    for(int i=1;i<=MAX;i++){
        factorial[i]=factorial[i-1]*i%MOD;
        inv_fact[i]=(inv_fact[i-1]*modular_inv(i))%MOD;
    }
}

int main(){
    find_factorial();
    cout<<((factorial[20] % MOD *inv_fact[4] % MOD * inv_fact[10-4] % MOD) %MOD)<<endl;
    int t;
    scanf("%d",&t);
    long long n;

    for(int Case=1;Case<=t;Case++){
        scanf("%lld",&n);
        long long ans=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                int f=i,s=n/i;
                ans+=(factorial[n]*BigMOD(inv_fact[f],s)%MOD*inv_fact[s]%MOD)%MOD;
                if(f!=s)
                    ans+=(factorial[n]*BigMOD(inv_fact[s],f)%MOD*inv_fact[f]%MOD)%MOD;
                ans%=MOD;
            }
        }
        printf("Case %d: %lld\n",Case,ans);
    }
    return 0;
}


