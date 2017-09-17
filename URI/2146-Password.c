#include <stdio.h>

void main(){
    int n;
    while((scanf("%d",&n))!=EOF){
        if(n>1000 && n<100000)
            printf("%d\n",n-1);
    }
}
