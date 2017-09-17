#include <stdio.h>

int main(){
    int n,i,j,k;
    for(i=1;;i++){
        int sum=1;
        if(scanf("%d",&n)==EOF)
            break;
        else{
            for(j=0;j<=n;j++)
                sum=sum+j;
            printf("Caso %d: %d numero\n",i,sum);
            printf("0");
            for(k=1;k<=n;k++)
                for(j=0;j<k;j++)
                    printf(" %d",k);
            printf("\n\n");
        }
    }
    return 0;
}
