#include <stdio.h>
#include <math.h>

#define pi 3.14159
#define g 9.80665

int main(){
    double h,rad=pi/180.0,a=g/2.0;
    while(scanf("%lf",&h)!=EOF){
        int p1,p2;
        scanf("%d%d",&p1,&p2);
        int n;
        scanf("%d",&n);
        while(n--){
            double alpha,u;
            scanf("%lf %lf",&alpha,&u);
            double b=u*sin(rad*alpha),c=h;
            double t=(b+sqrt(b*b+4*c*a))/(2*a);
            double R=u*cos(rad*alpha)*t;
            printf("%.5lf -> ",R);
            if(R>=p1 && R<=p2)
                printf("DUCK");
            else
                printf("NUCK");
            printf("\n");
        }
    }
    return 0;
}
