#include <stdio.h>

int main(){
    int n,i,mul=1;
    scanf("%d",&n);
    for(i=n;i>1;i--)
        mul=mul*i;
    printf("%d\n",mul);
    return 0;
}
