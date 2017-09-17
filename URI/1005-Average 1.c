#include <stdio.h>

int main(){
    double a,b,MEDIA,sum1,sum2;
    scanf("%lf%lf",&a,&b);
    sum1=3.5+7.5;
    sum2=(a*3.5)+(b*7.5);
    MEDIA=sum2/sum1;
    printf("MEDIA = %.5lf\n",MEDIA);
    return 0;
}
