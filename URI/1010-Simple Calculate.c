#include <stdio.h>

int main(){
    int c1,c2;
    double u1,u2,p1,p2,t;
    scanf("%d%lf%lf%d%lf%lf",&c1,&u1,&p1,&c2,&u2,&p2);
    t=u1*p1+u2*p2;
    printf("VALOR A PAGAR: R$ %.2lf\n",t);
    return 0;
}
