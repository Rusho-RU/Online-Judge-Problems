#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        int data[n][m];

        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                scanf("%d",&data[i][j]);

        int mx;

        for(int i=0; i<n; i++){
            mx = 1;
            for(int j=0; j<m ; j++){
                if(data[i][j] == -1){
                    if(i==0){
                        if(j==0){
                            data[i][j] = 1;
                        }
                        else{
                            data[i][j] = mx;
                        }
                    }

                    else{
                        data[i][j] = max(mx, data[i-1][j]);
                        mx = data[i][j];
                    }
                }

                else
                    mx = data[i][j];
            }
        }

        bool nondecreasing = true;

        for(int i=0; i<n; i++){
            for(int j=1; j<m; j++){
                if(data[i][j]<data[i][j-1])
                    nondecreasing = false;
            }
        }

        for(int j=0; j<m; j++){
            for(int i=1; i<n; i++){
                if(data[i][j]<data[i-1][j])
                    nondecreasing = false;
            }
        }

        if(!nondecreasing){
            puts("-1");
            continue;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                printf("%d",data[i][j]);
                if(j==m-1)
                    puts("");
                else
                    printf(" ");
            }
        }
    }

    return 0;
}
