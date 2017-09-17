#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,d,h1,h2,r1,r2;
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4.0*c*a;
    if(d<0 || a==0)
        printf("Impossivel calcular\n");
    else{
        h1=-b+sqrt(d);
        h2=-b-sqrt(d);
        r1=h1/(2*a);
        r2=h2/(2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }
    return 0;
}
