#include <stdio.h>

int main(){
    char s[1000];
    long long int n,i=0,sum=0;
    while(gets(s)){
        i++;
        scanf("%lld",&n);
        getchar();
        sum+=n;
    }
    printf("%.1lf\n",(double)sum/i);
    return 0;
}
