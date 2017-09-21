#include <bits/stdc++.h>
using namespace std;

long long gcd(long long u, long long v)
{
    long long shift;
    if (u==0) return v;
    if (v==0) return u;
    shift=__builtin_ctz(u | v);
    u>>=__builtin_ctz(u);
    do{
        v>>= __builtin_ctz(v);
        if(u > v){
            long long t=v;
            v=u;
            u=t;
        }
        v=v-u;
    } while(v!=0);
    return u<<shift;
}

long long lcm(long long a, long long b){
    return (a*b)/gcd(a,b);
}

int main(){
    long long n;
    while(scanf("%lld",&n)==1,n){
        long long i,l=1;
        for(i=2;i<=n;i++){
            l=lcm(l,i);
        }
        printf("%lld\n",l);
    }
    return 0;
}
