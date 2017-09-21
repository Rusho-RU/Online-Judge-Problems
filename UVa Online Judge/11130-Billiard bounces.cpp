#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rad acos(-1)/180

int main(){
    double a,b,v,A,t;
    while(scanf("%lf %lf %lf %lf %lf",&a,&b,&v,&A,&t) && a+b+v+A+t){
        double dist=(v*t)/2;
        double horizontal=((b/2)+dist*sin(rad*A))/b,vertical=((a/2)+dist*cos(rad*A))/a;
        printf("%d %d\n",(int)vertical,(int)horizontal);
    }
    return 0;
}
