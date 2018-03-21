#include <bits/stdc++.h>
using namespace std;

#define MAX 1010
#define INF 0x3f3f3f3f

int dp[MAX][MAX], pos[MAX][MAX], data[MAX];



int main(){
    int n, m;

    while(scanf("%d %d",&n,&m)==2){
        sizeof(dp, 0, sizeof dp);

        data[0] = 0;

        for(int i=1; i<=m; i++){
            scanf("%d",&data[i]);
        }

        m++;

        data[m] = n;

        for(int i=m; i>=1; i--){
            pos[i][i] = i;

            for(int j=i+1; j<=m; j++){
                dp[i][j] = INF;

                for(int k=pos[i][j-1]; k<=pos[i+1][j]; k++){
                    int cost = dp[i][k] + dp[k+1][j] + data[j] - data[i-1];

                    if(cost < dp[i][j])
                        dp[i][j] = cost, pos[i][j] = k;
                }
            }
        }

        printf("%d\n",dp[1][m]);
    }

    return 0;
}
