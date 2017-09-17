#include <stdio.h>

int main(){
    int i,n;
    double sum=0;
    for(i=0;;i++){
        scanf("%d",&n);
        if(n<0)
            break;
        sum=sum+n;
    }
    printf("%.2lf\n",sum/i);
}
