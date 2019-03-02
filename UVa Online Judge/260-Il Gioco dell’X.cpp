#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAX 220

int dx[6] = {-1, -1,  0, 0, 1, 1};
int dy[6] = {-1,  0, -1, 1, 0, 1};

int n;
char grid[MAX][MAX];
bool visited[MAX][MAX];

bool valid(int x, int y){
    return (x>=0 && x<n && y>=0 && y<n);
}

bool bfs(){
    queue<pair<int, int> >q;

    memset(visited, false, sizeof visited);

    for(int i=0; i<n; i++){
        q.push({0, i});
    }

    while(!q.empty()){
        int ux = q.front().first;
        int uy = q.front().second;
        q.pop();

        for(int i=0; i^6; i++){
            int vx = ux+dx[i];
            int vy = uy+dy[i];

            if(valid(vx, vy) && !visited[vx][vy] && grid[vx][vy]=='b'){
                visited[vx][vy] = true;
                if(vx==n-1)
                    return true;

                q.push({vx, vy});
            }
        }
    }

    return false;
}

int main(){
    FasterIO;

    int Case=0;

    while(cin>>n && n){
        for(int i=0; i^n; i++){
            for(int j=0; j^n; j++){
                cin>>grid[i][j];
            }
        }

        cout<<++Case<<" "<<(bfs() ? 'B' : 'W')<<"\n";
    }

    return 0;
}
