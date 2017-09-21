#include <bits/stdc++.h>
using namespace std;

vector<int>data;

int dp[101][50000],ans;

int difference(int a, int b){
    if(a<b) return b-a;
    return a-b;
}

void reset(){
    data.clear();
    memset(dp,-1,sizeof dp);
}

int knap(int i, int w){
    if(i==data.size()) return 0;
    if(dp[i][w]!=-1) return dp[i][w];

    int r1=0,r2=0;
    if(w-data[i]>=0) r1=knap(i+1,w-data[i])+data[i];
    r2=knap(i+1,w);

    return dp[i][w]=max(r1,r2);
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n,val,sum=0;
        scanf("%d",&n);
        reset();

        while(n--){
            scanf("%d",&val);
            data.push_back(val);
            sum+=val;
        }

        int a=sum/2;
        int ans=knap(0,a);
        int h1=sum-ans, h2=difference(h1,sum);
        ans=difference(h1,h2);

        printf("%d\n",ans);
    }
    return 0;
}
