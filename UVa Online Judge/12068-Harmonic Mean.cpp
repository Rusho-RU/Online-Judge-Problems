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
    int t;
    scanf("%d",&t);
    for(int z=0;z<t;z++){
        int n,i;
        scanf("%d",&n);
        long long a[n];
        scanf("%lld",&a[0]);
        long long l=a[0];
        for(i=1;i<n;i++){
            scanf("%lld",&a[i]);
            l=lcm(l,a[i]);
        }
        long long sum=0;
        for(i=0;i<n;i++)
            sum+=l/a[i];

        long long nu=n*l,de=sum;
        long long hold=gcd(nu,de);
        nu/=hold,de/=hold;
        printf("Case %d: %lld/%lld\n",z+1,nu,de);
    }
    return 0;
}
