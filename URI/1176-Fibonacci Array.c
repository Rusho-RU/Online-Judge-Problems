#include <stdio.h>

int main(){
    int n,i,k,x;
    unsigned long long int sum,n1,n2;
    scanf("%d",&n);
    for(k=0;k<n;k++){
        n1=-1;
        n2=1;
        scanf("%d",&x);
        for(i=0;i<=x;i++){
            sum=n1+n2;
            n1=n2;
            n2=sum;
        }
        printf("Fib(%d) = %llu\n",x,sum);
    }
    return 0;
}

