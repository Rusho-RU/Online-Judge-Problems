#include <bits/stdc++.h>
using namespace std;

#define MAX 250

int dx[] = {-1,-1,0,0,1,1};
int dy[] = {-1,0,-1,1,0,1};

bool isBlack[MAX][MAX];
bool visited[MAX][MAX];

bool valid(int x, int y, int n){
    if(x>=0 && x<n && y>=0 && y<n)
        return true;
    return false;
}

bool dfs(int sx, int sy, int n){
    if(sx==n-1)
        return true;

    visited[sx][sy] = true;

    for(int i=0; i<6; i++){
        int x = sx + dx[i];
        int y = sy + dy[i];
        if(valid(x, y, n) && isBlack[x][y] && !visited[x][y] && dfs(x, y, n))
            return true;
    }

    return false;
}

bool isRowConnected(int n){
    for(int j=0; j<n; j++){
        if(isBlack[0][j]){
            if(dfs(0, j, n))
                return true;
        }
    }

    return false;
}

void reset(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            isBlack[i][j] = visited[i][j] = false;
        }
    }
}

int main(){
    int n, Case=0;

    while(scanf("%d",&n) && n){
        char ch;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                scanf(" %c",&ch);
                if(ch=='b')
                    isBlack[i][j] = 1;
            }
        }

        if(isRowConnected(n))
            printf("%d B\n",++Case);
        else
            printf("%d W\n",++Case);

        reset(n);
    }

    return 0;
}
