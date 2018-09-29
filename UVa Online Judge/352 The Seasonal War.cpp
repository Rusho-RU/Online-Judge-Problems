#include <bits/stdc++.h>
using namespace std;

#define MAX 30

char grid[MAX][MAX];
int dx[8] = {0,  0, 1, 1,  1, -1, -1, -1};
int dy[8] = {1, -1, 0, 1, -1,  0,  1, -1};

bool valid(int x, int y, int n){
    if(x>=0 && x<n && y>=0 && y<n)
        return true;
    return false;
}

void dfs(int sx, int sy, int n){
    grid[sx][sy] = '0';

    for(int i=0; i<8; i++){
        int x = sx+dx[i];
        int y = sy+dy[i];

        if(valid(x,y,n) && grid[x][y]=='1'){
            dfs(x, y, n);
        }
    }

    return;
}

int main(){
    int n, Case=0;

    while(scanf("%d",&n)==1){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                scanf(" %c",&grid[i][j]);
            }
        }

        int eagle=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='1'){
                    eagle++;
                    dfs(i, j, n);
                }
            }
        }

        printf("Image number %d contains %d war eagles.\n",++Case,eagle);
    }

    return 0;
}
