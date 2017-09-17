#include <stdio.h>

int main(){
    int i,j,n,mul;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        mul=1;
        for(j=0;j<3;j++){
            mul=mul*i;
            if(j==2)
                printf("%d",mul);
            else
                printf("%d ",mul);
        }
        printf("\n");
    }
    return 0;
}
