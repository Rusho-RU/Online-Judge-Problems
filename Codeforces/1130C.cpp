#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAX 55

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

char grid[MAX][MAX];
int n, r1, c1, r2, c2;
bool done, hold;
vector<pair<int, int> >v[2];

bool valid(int x, int y){
    if(x>=0 && x<n && y>=0 && y<n)
        return true;
    return false;
}

void dfs(int x, int y, int id){
    if(hold && x==r2-1 && y==c2-1){
        done = true;
        return;
    }

    if(grid[x][y]=='1')
        return;

    v[id].push_back({x+1, y+1});

    grid[x][y] = '1';

    for(int i=0; i<4; i++){
        int X = x+dx[i];
        int Y = y+dy[i];

        if(valid(X, Y))
            dfs(X, Y, id);
    }

    return;
}

int main(){
    FasterIO;

    cin>>n>>r1>>c1>>r2>>c2;

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>grid[i][j];

    done = false;
    hold = true;

    dfs(r1-1, c1-1, 0);

    if(done){
        cout<<"0\n";
        return 0;
    }

    hold = false;

    dfs(r2-1, c2-1, 1);

    int ans = INT_MAX;

    for(auto p1 : v[0]){
        for(auto p2 : v[1]){
            int x = p1.first - p2.first;
            int y = p1.second - p2.second;

            ans = min(ans, x*x+y*y);
        }
    }

    cout<<ans<<endl;

    return 0;
}

