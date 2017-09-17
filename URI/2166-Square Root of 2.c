#include <stdio.h>

void main(){
    int n;
    double sum=0.0;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        sum=1/(sum+2);
    }

    double sqrrt=1.0+sum;
    printf("%.*lf\n",10,sqrrt);
}

