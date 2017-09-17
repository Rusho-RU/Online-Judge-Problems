#include <bits/stdc++.h>
using namespace std;

struct type{
    int x,y;
};

bool operator <( type const& left, type const& right ){
    return left.x<right.x || (left.x==right.x && left.y>right.y);
}

int main(){
    int t,row,col,query;
    scanf("%d",&t);
    for(int Case=1;Case<=t;Case++){
        int i,j,x,y,crystal;
        scanf("%d%d%d",&row,&col,&query);
        getchar();
        char adj[row][col+5];
        for(i=0;i<row;i++){
            for(j=0;j<col;j++)
                scanf("%c",&adj[i][j]);
            getchar();
        }
        map<type,bool>visited;
        type temp;
        queue<type>q;
        printf("Case %d:\n",Case);
        while(query--){
            scanf("%d %d",&temp.x,&temp.y);
            q.push(temp);
            visited[temp]=true;
            crystal=0;
            if(adj[temp.x][temp.y]=='C') crystal=1;

            while(!q.empty()){
                temp=q.front();
                q.pop();
                x=temp.x,y=temp.y;
                temp.x=x-1,temp.y=y;
                if(x!=0 && !visited[temp] && (adj[x-1][y]=='.' || adj[x-1][y]=='C')){
                    if(adj[x-1][y]=='C')
                        crystal++;
                    visited[temp]=true;
                    q.push(temp);
                }

                temp.x=x+1,temp.y=y;
                if(x!=row-1 && !visited[temp] && (adj[x+1][y]=='.' || adj[x+1][y]=='C')){
                    if(adj[x+1][y]=='C')
                        crystal++;
                    visited[temp]=true;
                    q.push(temp);
                }

                temp.x=x,temp.y=y-1;
                if(y!=0 && !visited[temp] && (adj[x][y-1]=='.' || adj[x][y-1]=='C')){
                    if(adj[x][y-1]=='C')
                        crystal++;
                    visited[temp]=true;
                    q.push(temp);
                }

                temp.x=x,temp.y=y+1;
                if(y!=col-1 && !visited[temp] && (adj[x][y+1]=='.' || adj[x][y+1]=='C')){
                    if(adj[x][y+1]=='C')
                        crystal++;
                    visited[temp]=true;
                    q.push(temp);
                }
            }
            printf("%d\n",crystal);
        }
    }
    return 0;
}
