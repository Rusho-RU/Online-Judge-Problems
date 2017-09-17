#include <stdio.h>

int main(){
    int n,i;
    for(;;){
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=1;i<=n;i++){
            if(i!=n)
                printf("%d ",i);
            else
                printf("%d\n",i);
        }
    }
    return 0;
}
