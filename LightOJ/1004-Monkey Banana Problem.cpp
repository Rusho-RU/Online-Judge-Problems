#include <bits/stdc++.h>
using namespace std;

#define MAX 250

int dp[MAX][MAX];

void reset(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            dp[i][j] = 0;
        }
    }
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        reset(2*n);

        for(int i=1; i<2*n; i++){
            for(int j=1; j<=min(abs(2*n-i), i); j++){
                scanf("%d", &dp[i][j]);
                int sign = -1;
                if(abs(2*n-i) < i)
                    sign = 1;

                dp[i][j] += max(dp[i-1][j], dp[i-1][j+sign]);
            }
        }

        printf("Case %d: %d\n",++Case,dp[2*n-1][1]);
    }

    return 0;
}
