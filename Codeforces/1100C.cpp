#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    double n, r;

    while(cin>>n>>r){
        double beta = acos(-1)/n;
        double ans = r*sin(beta)/(1-sin(beta));
        cout<<setprecision(11)<<ans<<endl;
    }

    return 0;
}
