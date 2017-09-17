#include <stdio.h>

int main(){
    char s[100];
    double f,d,t;
    scanf("%s%lf%lf",s,&f,&d);
    t=f+((15*d)/100);
    printf("TOTAL = R$ %.2lf\n",t);
    return 0;
}
