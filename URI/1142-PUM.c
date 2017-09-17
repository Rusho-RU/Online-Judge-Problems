#include <stdio.h>

int main(){
    int n,i,j=1,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(k=0;k<4;k++,j++){
            if(j%4==0)
                printf("PUM\n");
            else
                printf("%d ",j);
        }
    }
    return 0;
}
