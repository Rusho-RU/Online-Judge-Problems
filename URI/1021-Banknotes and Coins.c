#include <stdio.h>

int main(){
    double n;
    int a,s;
    scanf("%lf",&n);
    s=n;
    printf("NOTAS:\n");
    a=s/100;
    printf("%d nota(s) de R$ 100.00\n",a);
    s=s%100;
    a=s/50;
    printf("%d nota(s) de R$ 50.00\n",a);
    s=s%50;
    a=s/20;
    printf("%d nota(s) de R$ 20.00\n",a);
    s=s%20;
    a=s/10;
    printf("%d nota(s) de R$ 10.00\n",a);
    s=s%10;
    a=s/5;
    printf("%d nota(s) de R$ 5.00\n",a);
    s=s%5;
    a=s/2;
    printf("%d nota(s) de R$ 2.00\n",a);
    s=s%2;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",s);
    s=(n-(int)n)*100;
    a=s/50;
    s=s%50;
    printf("%d moeda(s) de R$ 0.50\n",a);
    a=s/25;
    s=s%25;
    printf("%d moeda(s) de R$ 0.25\n",a);
    a=s/10;
    s=s%10;
    printf("%d moeda(s) de R$ 0.10\n",a);
    a=s/5;
    s=s%5;
    printf("%d moeda(s) de R$ 0.05\n",a);
    printf("%d moeda(s) de R$ 0.01\n",s);
    return 0;
}
