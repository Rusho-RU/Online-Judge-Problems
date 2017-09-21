#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,z;
    scanf("%d",&t);
    for(z=0;z<t;z++){
        long long d,u,v;
        scanf("%lld%lld%lld",&d,&u,&v);
        if(!v || !u || v<=u){
            printf("Case %d: can't determine\n",z+1);
            continue;
        }
        double dif=(d*1.0/sqrt(v*v*1.0-u*u))-(d*1.0/v);
        printf("Case %d: %0.3lf\n",z+1,dif);
    }
    return 0;
}
