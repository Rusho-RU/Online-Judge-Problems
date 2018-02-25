#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};

bool isValid(int r, int c, int x, int y){
    if(x>=0 && x<r && y>=0 && y<c)
        return true;
    return false;
}

int main(){
    int h,w;

    while(scanf("%d%d",&h,&w)!=EOF){
        bool grid[h][w];
        int dist[h][w];
        char ch;
        int white=0;

        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                scanf(" %c",&ch);
                if(ch=='.')
                    grid[i][j] = true, white++;
                else
                    grid[i][j] = false;
            }
        }

        if(!grid[0][0]){
            puts("-1");
            continue;
        }

        memset(dist, -1, sizeof dist);
        queue<pair<int, int> >q;
        q.push(make_pair(0,0));
        dist[0][0] = 1;

        while(!q.empty()){
            int sx = q.front().first, sy = q.front().second;
            q.pop();

            for(int i=0; i<4; i++){
                int x = sx + dx[i];
                int y = sy + dy[i];

                if(isValid(h,w,x,y) && grid[x][y] && dist[x][y]==-1){
                    dist[x][y] = dist[sx][sy] + 1;
                    q.push(make_pair(x,y));
                }
            }
        }

        if(dist[h-1][w-1] == -1)
            puts("-1");

        else
            printf("%d\n",white - dist[h-1][w-1]);
    }

    return 0;
}
