#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool valid(int x, int y, int r, int c){
    return x>=0 && x<r && y>=0 && y<c;
}

bool inCircle(int posx, int posy, int x, int y, int r){
    int X = posx-x;
    int Y = posy-y;
    X*=X;
    Y*=Y;

    return X+Y<=r*r;
}

int main(){
    FasterIO;

    int r, c;

    while(cin>>r>>c && r+c){
        int level[r][c];

        memset(level, -1, sizeof level);

        int m;

        cin>>m;
        while(m--){
            int x, y;
            cin>>x>>y;
            x--, y--;
            level[x][y] = -2;
        }

        cin>>m;
        while(m--){
            int x, y, l;
            cin>>x>>y>>l;
            x--, y--;

            for(int i=x-l; i<=x+l; i++){
                for(int j=y-l; j<=y+l; j++){
                    if(valid(i, j, r, c) && inCircle(i, j, x, y, l)){
                        level[i][j] = -2;
                    }
                }
            }
        }

        queue<pair<int, int> >q;
        q.push({0, 0});
        level[0][0] = 0;

        while(!q.empty()){
            int nowx = q.front().first;
            int nowy = q.front().second;

            q.pop();

            for(int i=0; i<4; i++){
                int x = nowx+dx[i];
                int y = nowy+dy[i];

                if(valid(x, y, r, c) && level[x][y]==-1){
                    level[x][y] = level[nowx][nowy]+1;
                    q.push({x, y});
                }
            }
        }

        if(level[r-1][c-1]<0)
            cout<<"Impossible.\n";
        else
            cout<<level[r-1][c-1]<<endl;
    }

    return 0;
}

