#include <stdio.h>

int main(){
    double ara[]={4.00,4.50,5.00,2.00,1.50},p;
    int x,y;
    scanf("%d%d",&x,&y);
    p=ara[x-1]*y;
    printf("Total: R$ %.2lf\n",p);
    return 0;
}
