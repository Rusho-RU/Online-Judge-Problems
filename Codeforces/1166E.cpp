#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int m, n;

    while(cin>>m>>n){
        bool ache[m][n];

        memset(ache, false, sizeof ache);

        int cnt[10010] = {};

        for(int i=0; i<m; i++){
            int store;
            cin>>store;
            for(int j=0, val; j<store; j++){
                cin>>val;
                cnt[val]++;
                ache[i][val] = true;
            }
        }

        bool possible = true;

        for(int i=0; i<m; i++){
            int mx1 = INT_MIN, mx2 = INT_MIN;
            for(int j=1; j<=n; j++){
                if(ache[i][j])
                    mx1 = max(mx1, cnt[j]);
                else
                    mx2 = max(mx2, cnt[j]);
            }

            if(mx2>=mx1){
                possible = false;
                break;
            }
        }

        if(possible)
            cout<<"possible\n";
        else
            cout<<"impossible\n";
    }

    return 0;
}

