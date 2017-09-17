#include <stdio.h>

int main(){
    int n,m[70],i,j,l;
    while((scanf("%d",&n))!=EOF){
        l=n/2;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(j==n-1-i){
                    printf("2");
                }
                else if(j==i){
                    printf("1");
                }

                else
                    printf("3");
            }
            printf("\n");
        }
    }
}
