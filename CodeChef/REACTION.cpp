#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

#define MAX 11

int grid[MAX][MAX], r, c;

bool valid(int x, int y){
    return x>=0 && x<r && y>=0 && y<c;
}

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        cin>>r>>c;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cin>>grid[i][j];
            }
        }

        bool stable = true;

        for(int i=0; i<r && stable; i++){
            for(int j=0; j<c && stable; j++){
                int cnt=0;
                for(int k=0; k<4; k++){
                    int x = i+dx[k];
                    int y = j+dy[k];
                    if(valid(x, y)){
                        cnt++;
                    }
                }

                stable&=cnt>grid[i][j];
            }
        }

        cout<<(stable ? "Stable" : "Unstable")<<endl;
    }

    return 0;
}

