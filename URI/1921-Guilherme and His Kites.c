#include <stdio.h>

void main(){
    unsigned long long int n,sum=0;
    scanf("%llu",&n);
    unsigned long long int a=n-2;
    for(;a>1;a--)
        sum=sum+a;
    printf("%llu\n",sum);
    exit(0);
}
