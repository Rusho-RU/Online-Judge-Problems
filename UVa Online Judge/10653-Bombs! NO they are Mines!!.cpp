#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

int R,C;

struct type{
    int x,y;
};

int Dx[]={0,0,1,-1},Dy[]={1,-1,0,0};

bool valid(int x, int y){
    if(x>=0 && x<R && y>=0 && y<C) return true;
    return false;
}

int main(){
    int r,c;
    while(scanf("%d%d",&r,&c) && r+c){
        R=r,C=c;
        int t,n,a,b,dist[r][c];
        memset(dist,-1,sizeof dist);
        scanf("%d",&t);

        while(t--){
            scanf("%d %d",&a,&n);
            while(n--){
                scanf("%d",&b);
                dist[a][b]=INF;
            }
        }

        int sx,sy,dx,dy;
        scanf("%d%d%d%d",&sx,&sy,&dx,&dy);
        queue<type>q;
        q.push({sx,sy});
        dist[sx][sy]=0;
        bool found=false;

        while(!q.empty() && !found){
            int x=q.front().x, y=q.front().y;
            q.pop();

            for(int i=0;i<4;i++){
                int a=x+Dx[i], b=y+Dy[i];

                if(valid(a,b) && dist[a][b]==-1){
                    dist[a][b]=dist[x][y]+1;
                    if(a==dx && b==dy) found=true;
                    q.push({a,b});
                }
            }
        }

        printf("%d\n",dist[dx][dy]);
    }
    return 0;
}
