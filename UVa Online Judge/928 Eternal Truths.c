#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const int MAX = 90010;

typedef struct{
    int x, y;
}Cell;

Cell q[90010];

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int r, c;
        scanf("%d%d", &r, &c);

        char grid[r][c];
        int i, j, sx, sy, ex, ey;

        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                scanf(" %c", &grid[i][j]);
                if(grid[i][j]=='S')
                    sx=i, sy=j;
                else if(grid[i][j]=='E')
                    ex=i, ey=j;
            }
        }

        int head=0, tail=1;
        q[head] = (Cell){sx, sy};

        while(head!=tail){
            int nowx = q[head].x;
            int nwy = q[head].y;
            head++;
            head%=MAX;

            for(i=0; i<4; i++){

            }
        }
    }
}
