#include <stdio.h>

#define MAX 1010

typedef struct{
    int x, y;
}Cell;

int dx[8] = {-2, -1, +1, +2, +2, +1, -1, -2};
int dy[8] = {-1, -2, -2, -1, +1, +2, +2, +1};

int level[MAX][MAX];

Cell q[MAX*MAX];
int head, tail;

int valid(int x, int y){
    if(x>=0 && x<MAX && y>=0 && y<MAX)
        return 1;
    return 0;
}

void reset(){
    int i, j;
    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            level[i][j] = -1;
        }
    }

    return;
}

int main(){
    reset();

    head = 0, tail = 1;
    q[head] = (Cell){0, 0};
    level[0][0] = 0;
    int i;

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

    int t;
    scanf("%d", &t);

    while(t--){
        int x, y;
        scanf("%d%d",&x, &y);
        printf("%d\n", level[x-1][y-1]);
    }

    return 0;
}
