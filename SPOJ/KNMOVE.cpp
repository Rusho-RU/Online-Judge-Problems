#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

#define MAX 1010

int dx[8] = {-1, -1, +1, +2, +2, +1, -1, -2};
int dy[8] = {-1, -2, -2, -1, +1, +2, +2, +1};
int level[MAX][MAX];

bool valid(int x, int y){
    return x>=0 && x<MAX && y>=0 && y<MAX;
}

int main(){
    FasterIO;

    memset(level, -1, sizeof level);

    queue<pair<int, int> >q;
    q.push({0, 0});
    level[0][0] = 0;

    while(!q.empty()){
        int nowx = q.front().first;
        int nowy = q.front().second;

        q.pop();

        for(int i=0; i<8; i++){
            int x = nowx+dx[i];
            int y = nowy+dy[i];

            if(valid(x, y) && level[x][y]==-1){
                level[x][y] = level[nowx][nowy]+1;
                q.push({x, y});
            }
        }
    }

    int t;
    cin>>t;

    while(t--){
        int x, y;
        cin>>x>>y;
        cout<<level[x-1][y-1]<<endl;
    }

    return 0;
}

