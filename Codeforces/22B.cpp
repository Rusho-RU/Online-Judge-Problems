#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 30

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        char grid[n][m];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        int far[n][m];

        for(int i=0; i<n; i++){
            for(int j=m-1; j>=0; j--){
                if(grid[i][j]=='1')
                    far[i][j] = j-1;
                else if(j==m-1)
                    far[i][j] = j;
                else
                    far[i][j] = far[i][j+1];
            }
        }

        int ans = INT_MIN;

        for(int r1=0; r1<n; r1++){
            for(int c1=0; c1<m; c1++){
                int mn = INT_MAX;
                for(int r2=r1; r2<n && grid[r2][c1]=='0'; r2++){
                    mn = min(mn, far[r2][c1]);
                    ans = max(ans, 2*(r2-r1+mn-c1+2));
                }
            }
        }

        cout<<max(0, ans)<<endl;
    }

    return 0;
}

