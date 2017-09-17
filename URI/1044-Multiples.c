#include <stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a!=0 && b%a==0)
        printf("Sao Multiplos\n");
    else if(b!=0 && a%b==0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
    return 0;
}
