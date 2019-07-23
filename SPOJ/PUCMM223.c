#include <stdio.h>

#define MAX 21

typedef struct{
    int ax, ay, bx, by;
}Cell;

int dx[5] = {1, -1, 0, 0, 0};
int dy[5] = {0, 0, 0, 1, -1};
int level[MAX][MAX][MAX][MAX];
char grid[MAX][MAX];
Cell q[MAX*MAX*MAX*MAX];

void reset(){
    int i, j, k, l;
    for(i=0; i<MAX; i++)
        for(j=0; j<MAX; j++)
            for(k=0; k<MAX; k++)
                for(l=0; l<MAX; l++)
                    level[i][j][k][l] = -1;
}

int valid(int x, int y, int n, int m){
    if(x>=0 && x<n && y>=0 && y<m)
        return 1;
    return 0;
}

int main(){
    int n, m;

    while(scanf("%d%d", &n, &m) && n+m){
        reset();

        int i, j, ax, ay, bx, by;

        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                scanf(" %c", &grid[i][j]);
                if(grid[i][j]=='a')
                    ax=i, ay=j, grid[i][j] = '.';
                if(grid[i][j]=='b')
                    bx=i, by=j, grid[i][j] = '.';
            }
        }

        int head=0, tail=1;
        q[head] = (Cell){ax, ay, bx, by};
        level[ax][ay][bx][by] = 0;

        while(head!=tail){
            int nowax = q[head].ax;
            int noway = q[head].ay;
            int nowbx = q[head].bx;
            int nowby = q[head].by;

            head++;
            head%=MAX*MAX*MAX*MAX;

            for(i=0; i<5; i++){
                int ax = nowax+dx[i];
                int ay = noway+dy[i];

                if(!valid(ax, ay, n, m) || grid[ax][ay]=='#')
                    continue;

                for(j=0; j<5; j++){
                    int bx = nowbx+dx[j];
                    int by = nowby+dy[j];

                    if(!valid(bx, by, n, m) || grid[bx][by]=='#')
                        continue;
                    if(ax==nowbx && ay==nowby && bx==nowax && by==noway)
                        continue;
                    if(ax==bx && ay==by)
                        continue;

                    if(level[ax][ay][bx][by]==-1){
                        level[ax][ay][bx][by] = level[nowax][noway][nowbx][nowby]+1;
                        q[tail] = (Cell){ax, ay, bx, by};
                        tail++;
                        tail%=MAX*MAX*MAX*MAX;
                    }
                }
            }
        }

        if(level[bx][by][ax][ay]==-1)
            puts("IMPOSSIBLE");

        else
            printf("%d\n", level[bx][by][ax][ay]);
    }
}
