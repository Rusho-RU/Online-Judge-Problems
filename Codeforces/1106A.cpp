#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int dx[] = {-1, -1, 1, 1};
int dy[] = {-1, 1, -1, 1};

bool valid(int x, int y, int n){
    if(x>=0 && x<n && y>=0 && y<n)
        return true;
    return false;
}

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        char grid[n][n];

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>grid[i][j];
            }
        }

        int cnt = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='X'){
                    int k;
                    for(k=0; k<4; k++){
                        int x = i+dx[k];
                        int y = j+dy[k];
                        if(valid(x, y, n) && grid[x][y]=='X');
                        else break;
                    }
                    if(k==4)
                        cnt++;
                }
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}
