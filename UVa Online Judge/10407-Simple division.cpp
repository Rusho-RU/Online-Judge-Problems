#include <bits/stdc++.h>
using namespace std;

long long gcd(long long u, long long  v)
{
    long long shift;
    if (u==0) return v;
    if (v==0) return u;
    shift=__builtin_ctz(u | v);
    u>>=__builtin_ctz(u);
    do{
        v >>= __builtin_ctz(v);
        if (u > v) {
            unsigned long long t=v;
            v=u;
            u=t;
        }
        v=v-u;
    } while (v!=0);
    return u<<shift;
}

int main(){
    long long a[1005],i,g;
    while(scanf("%lld",&a[0]),a[0]){
        scanf("%lld",&a[1]);
        i=2,g=abs(a[0]-a[1]);
        while(scanf("%lld",&a[i]),a[i]){
            g=gcd(g,abs(a[0]-a[i]));
            i++;
        }
        printf("%lld\n",g);
    }
    return 0;
}
