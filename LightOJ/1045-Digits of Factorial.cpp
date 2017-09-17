#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000+1

int b;
double dp[MAX];

void calcu(){
    dp[0]=0;
    for(int i=1;i<MAX;i++)
        dp[i]=dp[i-1]+log(i);
}

int main(){
    int t,Case=0;
    scanf("%d",&t);
    calcu();

    while(t--){
        int n;
        scanf("%d%d",&n,&b);
        int ans=floor(dp[n]/log(b))+1;
        printf("Case %d: %d\n",++Case,ans);
    }
    return 0;
}
