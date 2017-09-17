#include <stdio.h>

int main(){
    double o,n,i;
    int p;
    char c=37;
    scanf("%lf",&o);
    if(o>=0 && o<=400)
        p=15;
    else if(o>=400.01 && o<=800)
        p=12;
    else if(o>800 && o<=1200)
        p=10;
    else if(o>1200 && o<=2000)
        p=7;
    else if(o>2000)
        p=4;
    i=(o*p)/100;
    n=o+i;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %c\n",n,i,p,c);
    return 0;
}
