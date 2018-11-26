#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount __builtin_popcount

int main(){
    FasterIO;

    long double eps = 1e-12;
    long double EPS = 1e-6;

    int t;
    cin>>t;

    while(t--){
        long double n;
        cin>>n;

        if(!n){
            cout<<"Y"<<" 0.000000000"<<" 0.000000000"<<endl;
            continue;
        }

        long double left, right, mid;

        left = 0.0;
        right = n;

        while(right-left >= eps){
            mid = (left + right)/2.0;
            if(mid * (n-mid)-n>eps) right = mid-eps;
            else if(n-mid * (n-mid)>eps) left = mid+eps;
            else break;
        }

        if(fabs(mid*(n-mid)-n) <= EPS)
            cout<<"Y "<< fixed<<setprecision(9)<<max(mid, n-mid) <<" "<<fixed<<setprecision(9)<<min(mid, n-mid)<<endl;
        else cout<<"N"<<endl;
    }
}
