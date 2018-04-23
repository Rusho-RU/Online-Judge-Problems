#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long BIGMOD(long long a, long long b){
    if(b==1)
        return a;

    if(b&1)
        return (a * BIGMOD(a, b-1)) % MOD;

    long long v = BIGMOD(a, b/2);
    return (v*v)%MOD;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        long long n,w, value;
        scanf("%lld %lld",&n,&w);

        if(w>8 || w<-9){
            puts("0");
            continue;
        }

        if(w<0)
            value = 10+w;
        else
            value = 9-w;

        n-=2;
        long long ans;

        if(n){
            ans = (value * BIGMOD(10, n)) % MOD;
        }
        else
            ans = value;

        printf("%lld\n",ans);
    }

    return 0;
}
