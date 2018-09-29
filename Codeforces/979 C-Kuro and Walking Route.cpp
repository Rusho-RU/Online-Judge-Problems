#include <bits/stdc++.h>
using namespace std;

#define MAX 3000000

vector<int>adj[MAX];
bool visited[MAX];
int ans, cnt;

bool dfs(int s, int target){
    if(s==target){
        cnt++;
        return true;
    }

    visited[s] = true;

    for(int i=0; i<adj[s].size(); i++){
        int t = adj[s][i];

        if(!visited[t]){
            if(dfs(t, target)){
                cnt++;
                return true;
            }
        }
    }

    return false;
}

int main(){
    int n, x, y;
    scanf("%d %d %d",&n, &x, &y);
    ans = (n-1)*n;

    dfs(x, y);

    ans-=cnt-1;

    printf("%d\n",ans);

    return 0;
}
