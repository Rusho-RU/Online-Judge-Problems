#include <stdio.h>

#define MAX 202
#define MAXN 4*MAX
const int INT_MIN = (1<<31);
const int INT_MAX = ~(1<<31);

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

typedef struct{
    int x, y;
}Cell;

Cell q[MAXN], u[3];
int level[3][MAX][MAX], n, m;
char grid[MAX][MAX];

int valid(int x, int y){
    if(x>=0 && x<=n+1 && y>=0 && y<=m+1)
        return 1;
    return 0;
}

void bfs(int id){
    int head=0, tail=1;
    q[head] = u[id];
    level[id][u[id].x][u[id].y] = 0;

    while(head!=tail){
        int nowx = q[head].x;
        int nowy = q[head].y;
        head++;
        head%=MAXN;

        int i;
        for(i=0; i<4; i++){
            int x = nowx+dx[i];
            int y = nowy+dy[i];

            if(valid(x, y) && grid[x][y]!='#' && level[id][x][y]==-1){
                level[id][x][y] = level[id][nowx][nowy]+1;
                q[tail] = (Cell){x, y};
                tail++;
                tail%=MAXN;
            }
        }
    }

    return;
}

void reset(){
    int i, j, k;
    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            grid[i][j] = '.';
            for(k=0; k<3; k++){
                level[k][i][j] = -1;
            }

        }
    }
}

int max(int a, int b){
    return a>b ? a:b;
}

int min(int a, int b){
    return a<b ? a:b;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        reset();
        scanf("%d %d", &n, &m);

        int i, j;
        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                scanf(" %c", &grid[i][j]);
                if(grid[i][j]=='1') u[0] = (Cell) {i, j};
                else if(grid[i][j]=='2') u[1] = (Cell) {i, j};
                else if(grid[i][j]=='3') u[2] = (Cell) {i, j};
            }
        }

        bfs(0);
        bfs(1);
        bfs(2);

        int ans = INT_MAX;

        int k;
        for(i=0; i<=n+1; i++){
            for(j=0; j<=m+1; j++){
                int mx = -1;
                for(k=0; k<3; k++){
                    mx = max(mx, level[k][i][j]);
                }
                if(mx!=-1)
                    ans = min(ans, mx);
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}
