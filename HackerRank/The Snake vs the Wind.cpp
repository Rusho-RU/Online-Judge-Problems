#include <bits/stdc++.h>
using namespace std;

int dx[4][4]={{0,1,-1,0},
            {0,1,-1,0},
            {1,0,0,-1},
            {-1,0,0,1}};

int dy[4][4]={{1,0,0,-1},
            {-1,0,0,1},
            {0,1,-1,0},
            {0,1,-1,0}};

int decide(char c){
    if(c=='e')
        return 0;
    if(c=='w')
        return 1;
    if(c=='s')
        return 2;
    return 3;
}

bool valid(int x, int y, int n){
    if(x>=0 && x<n && y>=0 && y<n)
        return true;
    return false;
}

int main(){
    int n, posX, posY;
    char d;
    scanf("%d %c %d %d",&n,&d,&posX,&posY);

    int indx = decide(d), check = n*n, cnt=1;

    bool visited[n][n];
    memset(visited, false, sizeof visited);
    int sx = posX, sy=posY;
    int data[n][n];
    data[sx][sy] = 1;
    visited[sx][sy] = true;

    while(++cnt<=check){
        for(int i=0; i<4; i++){
            int x = sx+dx[indx][i], y = sy+dy[indx][i];

            if(valid(x,y,n) && !visited[x][y]){
                data[x][y] = cnt;
                visited[x][y] = true;
                sx = x, sy = y;
                break;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d",data[i][0]);
        for(int j=1;j<n;j++){
            printf(" %d",data[i][j]);
        }
        printf("\n");
    }

    return 0;
}
