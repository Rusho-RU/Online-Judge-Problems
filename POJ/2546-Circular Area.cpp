#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

const double pi = acos(-1.0);

int main(){
    double x1, y1, r1, x2, y2, r2;

    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&r1,&x2,&y2,&r2)==6){
        double x = x1-x2;
        double y = y1-y2;
        double r = r1+r2;
        double d = sqrt(x*x + y*y);

        if(d >= r){
            puts("0.000");
            continue;
        }

        if(d <= abs(r1-r2)){
            double R = min(r1,r2);
            printf("%0.3lf\n", pi*R*R);
            continue;
        }

        double theta = 2*acos((r1*r1 + d*d - r2*r2)/(2.*r1*d));
        double alpha = 2*acos((r2*r2 + d*d - r1*r1)/(2.*r2*d));

        double ans = .5*r1*r1*(theta-sin(theta)) + .5*r2*r2*(alpha-sin(alpha));

        printf("%0.3lf\n",ans);
    }

    return 0;
}
