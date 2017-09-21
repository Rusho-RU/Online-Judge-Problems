#include <bits/stdc++.h>
using namespace std;

#define MAX 5001
#define MOD 1000000007

long long hold[MAX][MAX],dp[MAX][MAX];

void calculate(){
    hold[1][1]=dp[1][1]=1;
    for(int i=2;i<MAX;i++){
        for(int j=1;j<MAX;j++){
            hold[i][j]=(j*hold[i-1][j]+(i-j+1)*hold[i-1][j-1])%MOD;
            dp[i][j]=(hold[i][j]+dp[i][j-1])%MOD;
        }
    }
}

int main(){
    calculate();
    int n,q;
    while(scanf("%d%d",&n,&q)==2){
        int query;
        for(int i=0;i<q;i++){
            scanf("%d",&query);
            int x=min(query,n);
            printf("%lld",dp[n][x]);
            if(i==q-1) printf("\n");
            else printf(" ");
        }
    }
    return 0;
}
