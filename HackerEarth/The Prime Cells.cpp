#include <bits/stdc++.h>
using namespace std;

bool notprime[401];
int dx[]={0,0,1,-1}, dy[]={1,-1,0,0};

bool valid(int x, int y, int n){
    if(x>=0 && x<n && y>=0 && y<n) return true;
    return false;
}

void sieve(){
    for(int i=2;i*i<=400;i++){
        if(notprime[i]) continue;
        for(int j=i*i;j<401;j+=i)
            notprime[j]=true;
    }
    return;
}

int main(){
    int n;
    sieve();
    while(scanf("%d",&n)==1){
        int grid[n][n],cnt,ans=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&grid[i][j]);
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cnt=0;
                for(int k=0;k<4;k++){
                    int x=i+dx[k], y=j+dy[k];
                    if(valid(x,y,n))
                    cnt+=grid[x][y];
                }
                if(!notprime[cnt]) ans++;
            }
        }

        printf("%d\n",ans);
    }
    return 0;
}
