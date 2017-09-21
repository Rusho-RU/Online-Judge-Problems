#include <bits/stdc++.h>
using namespace std;
int N,n;
#define max 500
struct matrix{
    char c[max][max];
};

matrix rotate_90(matrix A){
    matrix B;
    int i,j,k,l;
    for(i=0,k=n-1;i<n;i++,k--)
        for(j=0;j<n;j++)
            B.c[j][k]=A.c[i][j];
    return B;
}

int check(matrix A, matrix B){
    int i,j,count=0,k,l;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(A.c[i][j]==B.c[0][0]){
                for(k=0;k<n;k++){
                    for(l=0;l<n;l++){
                        if(A.c[i+k][j+l]!=B.c[k][l])
                            break;
                    }
                    if(l!=n)
                        break;
                }
                if(k==n)
                    count++;
            }
        }
    }
    return count;
}

int main(){
    while(scanf("%d%d",&N,&n),N,n){
        matrix A,B;
        getchar();
        int i,j;
        for(i=0;i<N;i++){
            for(j=0;j<N;j++)
                scanf("%c",&A.c[i][j]);
            getchar();
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                scanf("%c",&B.c[i][j]);
            getchar();
        }

        printf("%d",check(A,B));

        for(i=0;i<3;i++){
            B=rotate_90(B);
            printf(" %d",check(A,B));
        }
        printf("\n");
    }
    return 0;
}
