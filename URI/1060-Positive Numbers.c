#include <stdio.h>

int main(){
    double a[6];
    int count=0,i;
    for(i=0;i<6;i++){
        scanf("%lf",&a[i]);
        if(a[i]>0)
            count++;
    }
    printf("%d valores positivos\n",count);
}
