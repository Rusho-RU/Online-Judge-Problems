#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

struct type{
    int x,y;
};

int main(){
    int n,m;
    while(scanf("%d%d",&n,&m),n,m){
        getchar();
        char adj[110][110];
        int i,j,x,y;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%c",&adj[i][j]);
            }
            getchar();
        }

        queue<type>q;
        type temp;
        int count=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(adj[i][j]=='@'){
                    count++;
                    temp.x=i,temp.y=j;
                    q.push(temp);
                    while(!q.empty()){
                        temp=q.front();
                        x=temp.x,y=temp.y;
                        adj[x][y]='*';
                        q.pop();
                        if(x!=n-1 && adj[x+1][y]=='@'){
                            temp.x=x+1,temp.y=y;
                            q.push(temp);
                        }

                        if(x!=0 && adj[x-1][y]=='@'){
                            temp.x=x-1,temp.y=y;
                            q.push(temp);
                        }

                        if(y!=m-1 && adj[x][y+1]=='@'){
                            temp.x=x,temp.y=y+1;
                            q.push(temp);
                        }

                        if(y!=0 && adj[x][y-1]=='@'){
                            temp.x=x,temp.y=y-1;
                            q.push(temp);
                        }

                        if(x!=n-1 && y!=m-1 && adj[x+1][y+1]=='@'){
                            temp.x=x+1,temp.y=y+1;
                            q.push(temp);
                        }

                        if(x!=0 && y!=0 && adj[x-1][y-1]=='@'){
                            temp.x=x-1,temp.y=y-1;
                            q.push(temp);
                        }

                        if(x!=n-1 && y!=0 && adj[x+1][y-1]=='@'){
                            temp.x=x+1,temp.y=y-1;
                            q.push(temp);
                        }

                        if(x!=0 && y!=m-1 && adj[x-1][y+1]=='@'){
                            temp.x=x-1,temp.y=y+1;
                            q.push(temp);
                        }
                    }
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
