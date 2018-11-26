#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long

ll a,b,c,d;

bool overlapped(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3, ll x4, ll y4){
    a = max(x1, x3);
    b = max(y1, y3);
    c = min(x2, x4);
    d = min(y2, y4);

    return a<c && b<d;
}

pair<ll, ll> howMany(ll x1, ll y1, ll x2, ll y2){
    ll m = x2-x1;
    ll n = y2-y1;

    ll b=(n*m)/2, w=(n*m)/2;

    if(n&1 && m&1)
        w++;

    if((x1+y1)%2)
        swap(b, w);

    return {b, w};
}

int main(){
    FasterIO;

    ll n, m, t;

    cin>>t;

    while(t--){
        cin>>n>>m;

        ll tb=(n*m)/2, tw=(n*m)/2;

        if(n&1 && m&1)
            tw++;

        ll x1, y1, x2, y2, x3, y3, x4, y4;
        pair<ll, ll>f, s, t(0, 0);

        cin>>x1>>y1>>x2>>y2;
        x1--, y1--;
        f = howMany(x1, y1, x2, y2);

        tb-=f.first;
        tw+=f.first;

        cin>>x3>>y3>>x4>>y4;
        x3--, y3--;
        s = howMany(x3, y3, x4, y4);

        tw-=s.second;
        tb+=s.second;

        if(overlapped(x1, y1, x2, y2, x3, y3, x4, y4)){
            t = howMany(a, b, c, d);

            tb+=t.first;
            tw-=t.first;
        }

        cout<<tw<<" "<<tb<<endl;
    }

    return 0;
}

