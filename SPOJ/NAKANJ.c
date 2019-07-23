#include <stdio.h>

#define MAX 8

typedef struct{
    int x, y;
}Cell;

int dx[8] = {-2, -1, +1, +2, +2, +1, -1, -2};
int dy[8] = {-1, -2, -2, -1, +1, +2, +2, +1};

Cell q[MAX*MAX];
int level[MAX][MAX];

void reset(){
    int i, j;
    for(i=0; i<MAX; i++)
        for(j=0; j<MAX; j++)
            level[i][j] = -1;
}

int valid(int x, int y){
    if(x>=0 && x<MAX && y>=0 && y<MAX)
        return 1;
    return 0;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        reset();
        int sx, sy, ex, ey, i, j;
        char s[3], e[3];

        scanf("%s %s", s, e);

        sx = s[0]-'a';
        sy = s[1]-'1';

        ex = e[0]-'a';
        ey = e[1]-'1';

        int head=0, tail=1;
        q[head] = (Cell){sx, sy};
        level[sx][sy] = 0;

        while(head!=tail){
            int nowx = q[head].x;
            int nowy = q[head].y;

            head++;
            head%=MAX*MAX;

            for(i=0; i<8; i++){
                int x = nowx+dx[i];
                int y = nowy+dy[i];

                if(valid(x, y) && level[x][y]==-1){
                    level[x][y] = level[nowx][nowy]+1;
                    q[tail] = (Cell){x, y};
                    tail++;
                    tail%=MAX*MAX;
                }
            }
        }

        printf("%d\n", level[ex][ey]);
    }

    return 0;
}
