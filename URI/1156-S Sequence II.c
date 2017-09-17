#include <stdio.h>

int main(){
    double i,j;
    double sum=0.0;
    for(i=1.0,j=1.0;j<40;j=j+2.0,i=i*2.0){
        sum=sum+(j/i);
    }
    printf("%.2lf\n",sum);
    return 0;
}

