#include <stdio.h>

#define MAX 505

typedef struct{
    int x, y;
}Cell;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int level[MAX][MAX];
Cell q[MAX*MAX];

void reset(){
    int i, j;
    for(i=0; i<MAX; i++)
        for(j=0; j<MAX; j++)
            level[i][j] = -1;
    return;
}

int valid(int x, int y, int n, int m){
    if(x>=0 && x<n && y>=0 && y<m)
        return 1;
    return 0;
}

int main(){
    int n, m;

    while(scanf("%d%d",&n,&m)==2){
        reset();
        int i, j, grid[n][m];

        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                char ch;
                scanf(" %c", &ch);
                grid[i][j] = ch-'0';
            }
        }

        int head=0, tail=1;
        q[head] = (Cell){0, 0};
        level[0][0] = 0;

        while(head!=tail){
            int nowx = q[head].x;
            int nowy = q[head].y;

            head++;
            head%=MAX*MAX;

            for(i=0; i<4; i++){
                int x = nowx+dx[i]*grid[nowx][nowy];
                int y = nowy+dy[i]*grid[nowx][nowy];

                if(valid(x, y, n, m) && level[x][y]==-1){
                    level[x][y] = level[nowx][nowy]+1;
                    q[tail] = (Cell){x, y};
                    tail++;
                    tail%=MAX*MAX;
                }
            }
        }

        printf("%d\n", level[n-1][m-1]);
    }

    return 0;
}
