#include <stdio.h>

void main(){
    int n;
    long long int a,b;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%lld %lld",&a,&b);
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");

    }
    exit(0);
}
