#include <bits/stdc++.h>
using namespace std;

int dx[] = {0,-1, 0,1,0};
int dy[] = {0, 0,-1,0,1};

bool valid(int i, int j, int k, int l){
    for(int dij=0; dij<5; dij++){
        int ii = i + dx[dij], jj = j + dy[dij];
        for(int dkl=0; dkl<5; dkl++){
            int kk = k + dx[dkl], ll = l + dy[dkl];
            if(ii==kk && jj==ll)
                return false;
        }
    }

    return true;
}

int main(){
    int n, m;

    while(scanf("%d %d",&n,&m)==2){
        int matrix[n][m];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                scanf("%d",&matrix[i][j]);
            }
        }

        int result = 0;

        for(int i=1; i<n-1; i++){
            for(int j=1; j<m-1; j++){
                bool eligible = true;
                for(int k=1; k<n-1; k++){
                    for(int l=1; l<m-1; l++){
                        if(!valid(i, j, k, l)) continue;
                        int total = 0;
                        for(int d = 0; d<5; d++){
                            int ii = i+dx[d], jj = j+dy[d];
                            int kk = k+dx[d], ll = l+dy[d];
                            total += matrix[ii][jj] * matrix[kk][ll];
                        }
                        result = max(result, total);
                    }
                }
            }
        }

        printf("%d\n",result);
    }

    return 0;
}
