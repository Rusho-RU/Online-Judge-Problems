#include <stdio.h>

void main(){
    int ara[4],i,sum=0;
    for(i=0;i<4;i++){
        scanf("%d",&ara[i]);
        sum=sum+ara[i];
    }
    printf("%d\n",sum-3);
    exit(0);
}
