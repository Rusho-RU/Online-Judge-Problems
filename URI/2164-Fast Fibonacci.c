#include <stdio.h>
#include <math.h>

void main(){
    while(1){
    int n;
    scanf("%d",&n);
    double root=sqrt(5);
    double a=(1.0+root)/2.0;
    double x=pow(a,n);
    double b=(1.0-root)/2.0;
    double y=pow(b,n);
    double f=(x-y)/root;
    printf("%.1lf\n",f);
}
}
