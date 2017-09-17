#include <stdio.h>

int main(){
    int n,a;
    scanf("%d",&n);
    a=n/3600;
    n=n%3600;
    printf("%d:",a);
    a=n/60;
    n=n%60;
    printf("%d:",a);
    printf("%d\n",n);
    return 0;
}
