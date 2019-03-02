#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int dx[] = {-1, -1,  0,  1, 1, 1, 0, -1};
int dy[] = { 0, -1, -1, -1, 0, 1, 1,  1};

bool valid(int r, int c){
    if(r>=1 && r<=8 && c>=1 && c<=8)
        return true;
    return false;
}

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int r, c, k;
        cin>>r>>c>>k;

        bool visited[10][10];
        int level[10][10];
        memset(visited, false, sizeof visited);

        queue<pair<int, int> >q;

        q.push({r, c});
        visited[r][c] = true;
        level[r][c] = 0;

        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for(int i=0; i<8; i++){
                int X = r+dx[i];
                int Y = c+dy[i];

                if(valid(X, Y) && !visited[X][Y]){
                    level[X][Y] = level[r][c]+1;
                    visited[X][Y] = true;
                    q.push({X, Y});
                }
            }
        }

        int cnt = 0;

        for(int i=1; i<=8; i++){
            for(int j=1; j<=8; j++){
                if(level[i][j]<=k)
                    cnt++;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}

