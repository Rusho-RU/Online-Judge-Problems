#include <stdio.h>

int main(){
    double a,b,c,t;
    scanf("%lf%lf%lf",&a,&b,&c);
    t=.5*a*c;
    printf("TRIANGULO: %.3lf\n",t);
    t=3.14159*c*c;
    printf("CIRCULO: %.3lf\n",t);
    t=((a+b)/2)*c;
    printf("TRAPEZIO: %.3lf\n",t);
    t=b*b;
    printf("QUADRADO: %.3lf\n",t);
    t=a*b;
    printf("RETANGULO: %.3lf\n",t);
    return 0;
}
