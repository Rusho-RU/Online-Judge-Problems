#include <stdio.h>

unsigned long long int fact(int n);

int main(){
    int a,b;
    unsigned long long int c;
    while((scanf("%d%d",&a,&b))!=EOF){
        c=fact(a)+fact(b);
        printf("%llu\n",c);
    }
    return 0;
}

unsigned long long int fact(int n){
    int i;
    unsigned long long int sum=1;
    for(i=1;i<=n;i++)
        sum=sum*i;
    return sum;
}
