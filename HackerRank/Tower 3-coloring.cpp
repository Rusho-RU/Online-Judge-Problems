#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define MOD (ll)1000000007

ll BigMOD(ll a, ll b, ll M){
    if(!b) return 1;

    if(b&1)
        return (a*BigMOD(a,b-1,M))%M;

    ll h=BigMOD(a,b/2,M);
    return h*h%M;
}

int main(){
    int n;
    scanf("%d",&n);
    ll ans=BigMOD(3,BigMOD(3,n,MOD-1),MOD);
    printf("%lld\n",ans);
    return 0;
}
