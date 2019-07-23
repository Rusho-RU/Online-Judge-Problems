#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    int q;
    scanf("%d", &q);

    while(q--){
        int n, m;
        scanf("%d%d", &n, &m);

        int row[n], col[m];

        char grid[n][m];

        for(int i=0; i<n; i++){
            row[i] = 0;
            for(int j=0; j<m; j++){
                scanf(" %c", &grid[i][j]);
                if(grid[i][j]=='.')
                    row[i]++;
            }
        }

        for(int j=0; j<m; j++){
            col[j] = 0;
            for(int i=0; i<n; i++){
                if(grid[i][j]=='.')
                    col[j]++;
            }
        }

        int ans = INT_MAX;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int tot = row[i]+col[j];
                if(grid[i][j]=='.')
                    tot--;

                ans = min(ans, tot);
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}

