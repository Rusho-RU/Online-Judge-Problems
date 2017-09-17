#include <stdio.h>

int main(){
    int n,a;
    scanf("%d",&n);
    printf("%d\n",n);
    a=n/100;
    printf("%d nota(s) de R$ 100,00\n",a);
    n=n%100;
    a=n/50;
    printf("%d nota(s) de R$ 50,00\n",a);
    n=n%50;
    a=n/20;
    printf("%d nota(s) de R$ 20,00\n",a);
    n=n%20;
    a=n/10;
    printf("%d nota(s) de R$ 10,00\n",a);
    n=n%10;
    a=n/5;
    printf("%d nota(s) de R$ 5,00\n",a);
    n=n%5;
    a=n/2;
    printf("%d nota(s) de R$ 2,00\n",a);
    n=n%2;
    a=n/1;
    printf("%d nota(s) de R$ 1,00\n",a);
    return 0;
}
