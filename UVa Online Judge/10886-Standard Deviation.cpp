#include <bits/stdc++.h>
using namespace std;

unsigned long long seed;
double gen(){
    static const long double Z=(long double)1.0/(1LL<<32);
    seed>>=16;
    seed&=( 1ULL << 32 ) - 1;
    seed*=seed;
    return seed*Z;
}

int main(){
    int t;
    scanf("%d",&t);
    for(int z=0;z<t;z++){
        long long n;
        scanf("%lld %llu", &n, &seed);
        long double sum=0,sum2=0,ret=0,x,m;
        for (int i=0;i<n;i++){
            x=gen();
            sum+=x;
            sum2+=x*x;
        }
        m=sum/n;
        ret=(sum2-2*m*sum)/n+m*m;
        ret=sqrt(ret);
        printf("Case #%d: %.5lf\n",z+1,(double)ret);
    }
    return 0;
}
