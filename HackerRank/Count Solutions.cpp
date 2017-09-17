#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        ll a,b,c,d,Count=0;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

        for(ll i=1;i<=c;i++){
            for(ll j=1;j<=d;j++){
                ll h1=i*i+j*j, h2=i*a+j*b;
                if(h1==h2) Count++;
            }
        }
        printf("%lld\n",Count);
    }
    return 0;
}
