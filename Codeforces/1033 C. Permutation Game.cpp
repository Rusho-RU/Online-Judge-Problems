#include <bits/stdc++.h>
using namespace std;

#define MAX 100010

int data[MAX], n, mx, dp[MAX];

bool recur(int curr){
    if(dp[curr]==1)
        return 0;
    if(dp[curr]==2)
        return 1;
    bool willWin = false;

    for(int i=1; ; i++){
        int next1 = curr + data[curr] * i;
        int next2 = curr - data[curr] * i;

        if(next1>=n && next2<0) break;

        if(next1<n && data[next1] > data[curr]) willWin |= recur(next1);
        if(next2>=0 && data[next2] > data[curr]) willWin |= recur(next2);
    }

    willWin ? dp[curr] = 1 : dp[curr] = 2;

    return !willWin;
}

int main(){
    while(scanf("%d",&n)==1){
        for(int i=0; i<n; i++)
            scanf("%d",&data[i]);

        memset(dp, -1, sizeof dp);

        for(int i=0; i<n; i++){
            recur(i);
        }

        for(int i=0;  i<n; i++)
            dp[i]==1 ? printf("A") : printf("B");

        puts("");
    }

    return 0;
}
