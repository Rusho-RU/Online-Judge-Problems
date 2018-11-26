#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount __builtin_popcount
#define pi acos(-1)
#define eps 1e-10

int main(){
    FasterIO;

    double d,h,v,e;

    while(cin>>d>>h>>v>>e){
        d/=2;

        double increase = pi*d*d*e;

        v-=increase;

        if(v < eps)
            cout<<"NO"<<endl;
        else{
            double ans = (pi*d*d*h)/v;

            cout<<"YES\n"<<setprecision(13)<<ans<<endl;
        }
    }

    return 0;
}
