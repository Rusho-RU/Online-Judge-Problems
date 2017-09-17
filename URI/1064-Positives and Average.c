#include <stdio.h>

int main(){
    double a[6],sum=0.0;
    int count=0,i;
    for(i=0;i<6;i++){
        scanf("%lf",&a[i]);
        if(a[i]>0){
            count++;
            sum=sum+a[i];
        }
    }
    printf("%d valores positivos\n%.1lf\n",count,sum/count);
    return 0;
}
