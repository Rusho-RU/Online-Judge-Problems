#include <stdio.h>
#include <stdbool.h>
#include <string.h>

const int MAX = 400000;

bool valid(int x, int y, int r, int c){
    if(x>=0 && x<r && y>=0 && y<c)
        return true;
    return false;
}

bool inCircle(int posx, int posy, int x, int y, int r){
    x-=posx;
    y-=posy;

    x*=x;
    y*=y;

    if(x+y<=r*r)
        return true;
    return false;
}

typedef struct{
    int x, y;
}cell;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

cell q[400000];

int main(){
    int r, c;

    while(scanf("%d%d", &r, &c) && r+c){
        int level[r][c];

        memset(level, -1, sizeof level);

        int n, i, j;

        scanf("%d", &n);
        while(n--){
            int x, y;
            scanf("%d%d", &x, &y);
            x--, y--;
            level[x][y]--;
        }

        scanf("%d", &n);
        while(n--){
            int x, y, l;
            scanf("%d%d%d", &x,&y,&l);
            x--, y--;

            for(i=x-l; i<=x+l; i++){
                for(j=y-l; j<=y+l; j++){
                    if(valid(i, j, r, c) && inCircle(i, j, x, y, l)){
                        level[i][j]--;
                    }
                }
            }
        }

        int head=0, tail=1;

        q[head] = (cell){0, 0};
        level[0][0] = 0;

        while(head!=tail){
            int nowx = q[head].x;
            int nowy = q[head].y;

            head++;
            head%=MAX;

            for(i=0; i<4; i++){
                int x = nowx+dx[i];
                int y = nowy+dy[i];

                if(valid(x, y, r, c) && level[x][y]==-1){
                    level[x][y] = level[nowx][nowy]+1;
                    q[tail] = (cell){x, y};
                    tail++;
                    tail%=MAX;
                }
            }
        }

        if(level[r-1][c-1]<0)
            puts("Impossible.");
        else
            printf("%d\n", level[r-1][c-1]);
    }

    return 0;
}
