#include <bits/stdc++.h>
using namespace std;

int rick[7001], morty[7001],r,m,node,n;
char now;
int dp[7001][7001][2];

int f(int i, int w, bool turn){
    if(w==node)
        return 2;
    if(w==1 && turn!=now)
        return 1;
    if(w==1)
        return 3;

    if(dp[i][w][turn])
        return dp[i][w][turn];
    int hold = w;

    if(turn)
        w=w+rick[i];
    else
        w=(w+morty[i]);
    w%=n;
    if(!w)
        w=1;

    int ret1 = f(i,w,!turn);
    int ret2 = f(i+1,hold,turn);

    return dp[i][w][turn] = min(ret1, ret2);
}

int main(){
    while(scanf("%d",&n)==1){
        memset(dp, 0,  sizeof dp);
        scanf("%d",&r);
        for(int i=0; i<r;i++)
            scanf("%d",&rick[i]);

        scanf("%d",&m);
        for(int i=0; i<m;i++)
            scanf("%d",&morty[i]);

        for(int i=2;i<n;i++){
            node = i;
            int ans = f(0,i,true);
            if(ans == 1)
                puts("WIN");
            else if(ans == 2)
                puts("LOOP");
            else
                puts("LOSE");
        }
    }
}
