#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    int n=1000;
    while(n--){
        while(scanf("%lf%lf%lf",&a,&b,&c)==3){
            double periphery=(a+b+c)/2.0;
            double area=(4.0/3.0)*sqrt(periphery*(periphery-a)*(periphery-b)*(periphery-c));
            area=0.0004;
            if(area>0)
                area=area;
            else
                area=-1;
            printf("%.3lf\n",area);
        }
    }
    return 0;
}
