#include <stdio.h>

int main(){
    double a[3],h;
    int i,j;
    for(i=0;i<3;i++)
        scanf("%lf",&a[i]);
    for(i=0;i<2;i++)
        for(j=i+1;j<3;j++)
            if(a[j]>a[i]){
                h=a[i];
                a[i]=a[j];
                a[j]=h;
            }
    if(a[0]>0 && a[1]>0 && a[2]>0){
        double h1=a[1]*a[1]+a[2]*a[2],h2=a[0]*a[0];
        if(a[0]>=a[1]+a[2])
            printf("NAO FORMA TRIANGULO\n");
        else{
            if(h2==h1)
                printf("TRIANGULO RETANGULO\n");
            if(h2>h1)
                printf("TRIANGULO OBTUSANGULO\n");
            if(h2<h1)
                printf("TRIANGULO ACUTANGULO\n");
            if(a[0]==a[1] && a[0]==a[2])
                printf("TRIANGULO EQUILATERO\n");
            else if(a[0]==a[1] || a[0]==a[2] || a[1]==a[2])
                printf("TRIANGULO ISOSCELES\n");
        }
    }
    else
        printf("NAO FORMA TRIANGULO\n");
    return 0;
}
