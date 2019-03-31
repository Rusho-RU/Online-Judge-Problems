#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        int matrix[n][m], ans[n][m];

        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cin>>matrix[i][j];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int cnt[4] = {}, mx;
                set<int>st[4];

                int mx = matrix[i][j];
                for
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

