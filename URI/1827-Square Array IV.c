#include <stdio.h>

void main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int i,j,l1=n/3,l2=n-l1,h=n/2;
        for(i=0;i<l1;i++){
            for(j=0;j<n;j++){
                if(j==i)
                    printf("2");
                else if(j==n-1-i)
                    printf("3");
                else
                    printf("0");
            }
            printf("\n");
        }
        int hold=i-1;
        for(;i<l2;i++){
            for(j=0;j<n;j++){
                if(i==h && j==h)
                    printf("4");
                else if(j>hold && j<n-hold-1)
                    printf("1");
                else
                    printf("0");
            }
            printf("\n");
        }

        for(i=hold;i>=0;i--){
            for(j=0;j<n;j++){
                if(j==i)
                    printf("3");
                else if(j==n-1-i)
                    printf("2");
                else
                    printf("0");
            }
            printf("\n");
        }
        printf("\n");
    }
}
