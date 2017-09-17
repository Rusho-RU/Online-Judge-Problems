#include <bits/stdc++.h>
using namespace std;

struct type{
    int x,y;
}temp;

int main(){
    int t;
    scanf("%d",&t);
    for(int z=0;z<t;z++){
        int i,j,r,c,x,y,count=1;
        scanf("%d %d",&c,&r);
        getchar();
        char adj[r][c+5];
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf("%c",&adj[i][j]);
                if(adj[i][j]=='@') temp.x=i,temp.y=j;
            }
            getchar();
        }
        queue<type>q;
        q.push(temp);
        while(!q.empty()){
            temp=q.front();
            x=temp.x,y=temp.y;
            q.pop();
            if(x!=0 && adj[x-1][y]=='.'){
                count++;
                adj[x-1][y]='#';
                temp.x=x-1,temp.y=y;
                q.push(temp);
            }

            if(x!=r-1 && adj[x+1][y]=='.'){
                count++;
                adj[x+1][y]='#';
                temp.x=x+1,temp.y=y;
                q.push(temp);
            }

            if(y!=0 && adj[x][y-1]=='.'){
                count++;
                adj[x][y-1]='#';
                temp.x=x,temp.y=y-1;
                q.push(temp);
            }

            if(y!=c-1 && adj[x][y+1]=='.'){
                count++;
                adj[x][y+1]='#';
                temp.x=x,temp.y=y+1;
                q.push(temp);
            }
        }
        printf("Case %d: %d\n",z+1,count);
    }
    return 0;
}
