#include <stdio.h>

int main(){
    double a[3],h=0;
    int i;
    for(i=0;i<3;i++){
        scanf("%lf",&a[i]);
        if(a[i]>h){
            h=a[i];
        }
    }
    if(a[0]+a[1]+a[2]-h>h)
        printf("Perimetro = %.1lf\n",a[0]+a[1]+a[2]);
    else
        printf("Area = %.1lf\n",((a[0]+a[1])*a[2])/2);
    return 0;
}
