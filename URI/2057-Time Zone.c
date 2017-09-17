#include <stdio.h>

void main(){
    int s,t,f;
    scanf("%d%d%d",&s,&t,&f);
    if(s==0)
        s=24;
    int sum=s+t+f;
    if(sum>=24)
        printf("%d\n",sum-24);
    else
        printf("%d\n",sum);
}
