#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int info;
        int matrix[n][n];
        memset(matrix, 0, sizeof matrix);

        scanf("%d",&info);

        while(info--){
            int a,b,c,d,p;
            scanf("%d%d%d%d%d",&p,&a,&b,&c,&d);
            a--, b--, c--, d--;

            for(int i=a; i<=c; i++){
                for(int j=b; j<=d; j++){
                    matrix[i][j]^=p;
                }
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                printf("%d",matrix[i][j]);
                if(j==n-1)
                    puts("");
                else
                    printf(" ");
            }
        }
    }

    return 0;
}
