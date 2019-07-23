#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        int a[n][m], b[n][m];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>b[i][j];
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int mn = min(a[i][j], b[i][j]);
                int mx = max(a[i][j], b[i][j]);
                a[i][j] = mx;
                b[i][j] = mn;
            }
        }

        bool possible = true;

        for(int i=0; i<n; i++){
            for(int j=1; j<m; j++){
                if(a[i][j]<=a[i][j-1] || b[i][j]<=b[i][j-1])
                    possible = false;
            }
        }

        for(int i=0; i<m; i++){
            for(int j=1; j<n; j++){
                if(a[j][i]<=a[j-1][i] || b[j][i]<=b[j-1][i])
                    possible = false;
            }
        }

        if(possible)
            cout<<"Possible\n";
        else
            cout<<"Impossible\n";
    }

    return 0;
}

