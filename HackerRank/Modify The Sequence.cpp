#include <bits/stdc++.h>
using namespace std;

#define MAX 10000

int value[MAX],n,dp[MAX],dir[MAX];

void read(){
    for(int i=0;i<n;i++)
        scanf("%d",&value[i]);
}

int longest(int u){
    if(dp[u]!=-1) return dp[u];
    int maxi=0;
    for(int v=u+1;v<n;v++){
        if(value[v]>value[u]){
            if(longest(v)>maxi){
                maxi=longest(v);
                dir[u]=v;
            }
        }
    }
    dp[u]=maxi+1;
    return dp[u];
}

int main(){
    scanf("%d",&n);
    memset(dp,-1,sizeof dp);
    read();
    int LIS=0,start;
    for(int i=0;i<n;i++){
        if(longest(i)>LIS){
            LIS=longest(i);
            start=i;
        }
    }

    printf("%d\n",LIS);
}
