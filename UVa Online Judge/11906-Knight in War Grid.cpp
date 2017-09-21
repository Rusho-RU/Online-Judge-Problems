#include <bits/stdc++.h>
using namespace std;

int dx[]={1,1,-1,-1,},dy[]={1,-1,1,-1}, ROW, COL;

struct node_type{
    int x,y;
    node_type(int a, int b):x(a),y(b){}
};

bool valid(int x, int y){
    if(x>=0 && x<ROW && y>=0 && y<COL)
        return true;
    return false;
}

int main(){
    int t,Case=0;
    scanf("%d",&t);
    while(t--){
        int x,y,row,col,m,n,water,even=0,odd=0;
        scanf("%d%d%d%d%d",&row,&col,&m,&n,&water);
        ROW=row, COL=col;
        int grid[row][col];
        memset(grid,0,sizeof grid);

        for(int i=0;i<water;i++){
            scanf("%d%d",&x,&y);
            grid[x][y]=2;
        }

        queue<node_type>q;
        q.push(node_type(0,0));
        grid[0][0]=1;

        while(!q.empty()){
            int sx=q.front().x, sy=q.front().y;
            q.pop();
            int c=0;
            for(int i=0;i<4;i++){
                if((m==0 || n==0) && (i==1 || i==2)) continue;
                x=sx+m*dx[i], y=sy+n*dy[i];
                if(valid(x,y) && grid[x][y]!=2){
                    c++;
                    if(!grid[x][y]){
                        grid[x][y]=1;
                        q.push(node_type(x,y));
                    }
                }

                if(m==n) continue;

                x=sx+n*dx[i], y=sy+m*dy[i];
                if(valid(x,y) && grid[x][y]!=2){
                    c++;
                    if(!grid[x][y]){
                        grid[x][y]=1;
                        q.push(node_type(x,y));
                    }
                }
            }

            if(c%2) odd++;
            else even++;
        }

        printf("Case %d: %d %d\n",++Case,even,odd);
    }
    return 0;
}
