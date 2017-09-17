#include <stdio.h>

int main(){
    int n,i,j,k,mul;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",i);
        mul=i;
        for(j=0;j<2;j++){
            mul=mul*i;
            if(j==1)
                printf("%d\n",mul);
            else
                printf("%d ",mul);
        }
        printf("%d ",i);
        mul=i;
        for(j=0;j<2;j++){
            mul=mul*i;
            if(j==1)
                printf("%d\n",mul+1);
            else
                printf("%d ",mul+1);
        }
    }
    return 0;
}
