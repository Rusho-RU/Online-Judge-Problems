#include <stdio.h>

void main(){
    int n;
    double sum=0.0;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        sum=1/(sum+6);
    }

    double sqrrt=3.0+sum;
    printf("%.*lf\n",10,sqrrt);
}
