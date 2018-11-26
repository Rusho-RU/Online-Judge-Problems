#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define eps 1e-12

int main(){
    FasterIO;

    long double a, b, c;

    while(cin>>a>>b>>c){
        long double x1, y1, x2, y2;

        cin>>x1>>y1>>x2>>y2;

        long double X1=x1, Y1=y1, X2=x2, Y2=y2;

        if(fabs(a)<eps){
            cout<<"F"<<endl;
            X1 =(-c-b*y1)/a;
            X2 =(-c-b*y2)/b;
        }

        if(fabs(b)<eps){
            Y1=(-c-a*x1)/b;
            Y2=(-c-a*x2)/b;
        }

        long double ans = 1000000000000000000, dist;

        if(fabs(a)>eps && fabs(b)>eps){
            dist = fabs(X1-x1) + sqrt((X1-x2)*(X1-x2) + (Y2-y1)*(Y2-y1)) + fabs(Y2-y2);
            ans = min(ans, dist);

            dist = fabs(X1-x1) + sqrt((X1-X2)*(X1-X2) + (y2-y1)*(y2-y1)) + fabs(X2-x2);
            ans = min(ans, dist);

            dist = fabs(Y1-y1)+sqrt((x1-x2)*(x1-x2) + (Y2-Y1)*(Y2-Y1)) + fabs(Y2-y2);
            ans = min(ans, dist);

            dist = fabs(Y1-y1)+sqrt((x1-X2)*(x1-X2) + (y2-Y1)*(y2-Y1)) + fabs(X2-x2);
            ans = min(ans, dist);
        }

        else if(fabs(b)>eps){
            dist = fabs(Y1-y1) + fabs(x1-x2) + fabs(Y2-y2);
            ans = min(ans, dist);
        }

        else{
            dist = fabs(X1-x1) + fabs(y1-y2) + fabs(X2-x2);
            ans = min(ans, dist);
        }

        cout<<fixed<<setprecision(12)<<ans<<endl;
    }

    return 0;
}


