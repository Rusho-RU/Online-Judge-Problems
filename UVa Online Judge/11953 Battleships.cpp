#include <bits/stdc++.h>
using namespace std;

#define MAX 110

char grid[MAX][MAX];
bool isAlive;

int dx[4] = {0,  0, 1, -1};
int dy[4] = {1, -1, 0,  0};

bool valid(int x, int y, int n){
    if(x>=0 && x<n && y>=0 && y<n)
        return true;
    return false;
}

void dfs(int sx, int sy, int n){
    if(grid[sx][sy]=='x')
        isAlive = true;

    grid[sx][sy] = '.';

    for(int i=0; i<4; i++){
        int x = sx + dx[i];
        int y = sy + dy[i];

        if(valid(x,y,n) && (grid[x][y]=='x' || grid[x][y]=='@'))
            dfs(x,y,n);
    }

    return;
}

int main(){
    //freopen("output.txt", "w", stdout);

    int t, Case = 0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                scanf(" %c",&grid[i][j]);
            }
        }

        int cnt = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='x' || grid[i][j]=='@'){
                    isAlive = false;
                    dfs(i, j, n);
                    if(isAlive)
                        cnt++;
                }
            }
        }

        printf("Case %d: %d\n",++Case,cnt);
    }

    return 0;
}
