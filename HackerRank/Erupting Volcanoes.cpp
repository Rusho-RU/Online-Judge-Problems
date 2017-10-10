#include <bits/stdc++.h>
using namespace std;

int dx[] = {1,1,1,-1,-1,-1,0,0}, dy[]={1,-1,0,1,-1,0,1,-1};
int N;
bool valid(int x, int y){
    if(x>=0 && x<N && y>=0 && y<N)
        return true;
    return false;
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    N=n;
    int ans = -1;

    int X,Y,w;

    int data[n][n], temp[n][n];
    bool visited[n][n];
    memset(data, 0, sizeof data);

    for(int i=0; i<m; i++){
        scanf("%d%d%d",&X, &Y, &w);
        ans = max(ans,w);
        memset(visited, false, sizeof visited);
        data[X][Y]+=w;
        temp[X][Y] = w;

        queue<pair<int, int> >q;

        q.push(make_pair(X,Y));
        visited[X][Y] = true;

        while(!q.empty()){
            int sx = q.front().first, sy = q.front().second;
            q.pop();

            for(int i=0; i<8; i++){
                int x=sx+dx[i], y=sy+dy[i];

                if(valid(x,y) && !visited[x][y]){
                    data[x][y]+=temp[sx][sy]-1;
                    temp[x][y] = temp[sx][sy]-1;
                    if(temp[x][y]>1)
                        q.push(make_pair(x,y));
                    visited[x][y] = true;
                    ans=max(ans, data[x][y]);
                }
            }
        }
    }

    printf("%d\n",ans);

    return 0;
}
