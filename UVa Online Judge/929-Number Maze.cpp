#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000000

int cost[1000][1000],ROW,COL;

struct dimension{
    int x,y,cost;
    bool operator<(const dimension &a)const{
        return a.cost<cost;
    }
};

bool valid(int x, int y){
    if(x>=0 && x<ROW && y>=0 && y<COL)
        return true;
    return false;
}

int X[4]={0,1,0,-1},Y[4]={1,0,-1,0};

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int row,col;
        scanf("%d%d",&row,&col);
        ROW=row,COL=col;
        int data[row][col];

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                scanf("%d",&data[i][j]);
                cost[i][j]=MAX;
            }
        }

        cost[0][0]=data[0][0];
        priority_queue<dimension>q;
        q.push({0,0,data[0][0]});
        while(!q.empty()){
            int source_x=q.top().x,source_y=q.top().y,x,y;
            q.pop();
            for(int i=0;i<4;i++){
                x=source_x+X[i],y=source_y+Y[i];
                if(valid(x,y)){
                    int hold=cost[source_x][source_y]+data[x][y];
                    if(hold<cost[x][y]){
                        cost[x][y]=hold;
                        q.push({x,y,cost[x][y]});
                    }
                }
            }
        }

        printf("%d\n",cost[row-1][col-1]);
    }

    return 0;
}
