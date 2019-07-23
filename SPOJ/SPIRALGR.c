#include <stdio.h>

#define MAX 200
#define MAXN 20001

typedef struct{
    int x, y;
} Cell;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int grid[MAX][MAX], not_prime[MAXN], level[MAX][MAX];
Cell q[MAXN];

void seive(){
    not_prime[0]=  not_prime[1] = 1;

    int i;
    for(i=2; i*i<MAXN; i++){
        if(!not_prime[i]){
            int j;
            for(j=i*i; j<MAXN; j+=i){
                not_prime[j] = 1;
            }
        }
    }
}

void make_grid(){
    int i = MAX/2, j = MAX/2-1, dir=1, val=1;

    i--;

    int k;
    for(k=1; k<=MAX; k++){
        int cnt;
        for(cnt=1; cnt<=k; cnt++){
            i+=dir;
            grid[i][j] = val++;
        }

        for(cnt=1; cnt<k; cnt++){
            j+=dir;
            grid[i][j] = val++;
        }

        j+=dir;
        dir*=-1;
        i-=dir;
    }
}

Cell find_id(int n){
    int i, j;
    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            if(grid[i][j]==n){
                return (Cell){i, j};
            }
        }
    }
}

void reset(){
    int i, j;
    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            level[i][j] = -1;
        }
    }
}

int valid(int x, int y){
    if(x>=0 && x<MAX && y>=0 && y<MAX)
        return 1;
    return 0;
}

int main(){
    seive();
    make_grid();

    int u, v, Case=0;

    while(scanf("%d %d", &u, &v)==2){
        printf("Case %d: ", ++Case);

        if(!not_prime[u] || !not_prime[v]){
            puts("impossible");
            continue;
        }

        reset();

        Cell f = find_id(u);
        int sx = f.x, sy = f.y;

        int head=0, tail=1, ans=-1;
        q[head] = (Cell){sx, sy};
        level[sx][sy] = 0;

        while(head!=tail){
            int nowx = q[head].x;
            int nowy = q[head].y;

            head++;
            head%=MAXN;

            int i;
            for(i=0; i<4; i++){
                int x = nowx+dx[i];
                int y = nowy+dy[i];

                if(!valid(x, y))
                    continue;

                int val = grid[x][y];

                if(not_prime[val] && level[x][y]==-1){
                    level[x][y] = level[nowx][nowy]+1;
                    q[tail] = (Cell){x, y};
                    tail++;
                    tail%=MAXN;
                }

                if(val==v){
                    head=tail;
                    ans = level[x][y];
                    break;
                }
            }
        }

        if(ans==-1)
            puts("impossible");
        else
            printf("%d\n", ans);
    }

    return 0;
}
