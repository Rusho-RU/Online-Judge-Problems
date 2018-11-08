#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define MAX 2010

int n, m, x, y;
char grid[MAX][MAX];
bool visited[MAX][MAX];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
int dl[] = {0, 1, 0, 0};
int dr[] = {0, 0, 0, 1};

bool valid(int a, int b){
    if(a>=0 && a<n && b>=0 && b<m)
        return true;
    return false;
}

int dfs(int sx, int sy, int l, int r){
    if(grid[sx][sy]=='*') return 0;
    if(l>x) return 0;
    if(r>y) return 0;

    int cnt = 1;

    for(int i=0; i<4; i++){
        int vx = sx+dx[i];
        int vy = sy+dy[i];

        if(valid(vx, vy) && !visited[vx][vy])
            cnt+=dfs(vx, vy, l+dl[i], r+dr[i]);
    }

    return cnt;
}

int main(){
    FasterIO;
    while(cin>>n>>m){
        int sx, sy;
        memset(visited, false, sizeof visited);

        cin>>sx>>sy>>x>>y;
        sx--, sy--;

        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cin>>grid[i][j];

        int ans = dfs(sx, sy, 0, 0);

        cout<<ans<<endl;
    }

    return 0;
}
