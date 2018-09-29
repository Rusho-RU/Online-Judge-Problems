#include <bits/stdc++.h>
using namespace std;

#define MAX 550

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int row, col, crystal[MAX*MAX], inComponent[MAX][MAX];
int grid[MAX][MAX];

int indexing(char c){
    if(c=='#')
        return -1;
    if(c=='.')
        return 0;
    return 1;
}

bool valid(int x, int y){
    if(x>=0 && x<row && y>=0 && y<col)
        return true;
    return false;
}

void dfs(int ux, int uy, int component){
    inComponent[ux][uy] = component;

    if(grid[ux][uy]==1)
        crystal[component]++;

    for(int i=0; i<4; i++){
        int vx = ux + dx[i];
        int vy = uy + dy[i];

        if(valid(vx, vy) && !inComponent[vx][vy] && grid[vx][vy] != -1)
            dfs(vx, vy, component);
    }

    return;
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int query, component=0;
        scanf("%d %d %d",&row, &col, &query);

        memset(inComponent, 0, sizeof inComponent);
        memset(crystal, 0, sizeof crystal);

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                char c;
                scanf(" %c",&c);
                grid[i][j] = indexing(c);
            }
        }

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(inComponent[i][j] || grid[i][j]==-1)
                    continue;

                dfs(i, j, ++component);
            }
        }

        printf("Case %d:\n",++Case);

        while(query--){
            int x, y;
            scanf("%d%d",&x,&y);
            x--, y--;

            printf("%d\n", crystal[inComponent[x][y]]);
        }
    }

    return 0;
}
