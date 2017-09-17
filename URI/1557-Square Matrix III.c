#include <stdio.h>

int digit_count(int n);

int main(){
    int m[15][15],i,j,k,n,d;
    for(;;){
        int mul=1;
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=0;i<n;i++){
            m[0][i]=mul;
            mul=mul*2;
        }
        int h=m[0][n-1];
        for(i=1;i<n;i++){
            h=h*2;
        }
        d=digit_count(h);
        for(i=0;i<n;i++){
            if(i==0)
                printf("%*d",d,m[0][i]);
            else
                printf(" %*d",d,m[0][i]);
        }
        printf("\n");
        for(i=1;i<n;i++){
            for(j=0;j<n;j++){
                m[i][j]=m[i-1][j]*2;
                if(j==0)
                    printf("%*d",d,m[i][j]);
                else
                    printf(" %*d",d,m[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int digit_count(int n){
    int i;
    for(i=0;n!=0;n=n/10,i++);
    return i;
}
