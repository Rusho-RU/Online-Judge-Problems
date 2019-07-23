#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        vector<int>data[m];

        int cnt[n+1];

        memset(cnt, 0, sizeof cnt);

        for(int i=0; i<m; i++){
            int k;
            cin>>k;
            for(int j=0; j<k; j++){
                int s;
                cin>>s;
                data[i].push_back(s);
                cnt[s]++;
            }
        }

        int ans = 1;
        int p[m];

        for(int i=0; i<m; i++)
            cin>>p[i];

        for(int i=0; i<m; i++){
            int c=0;
            for(auto v : data[i]){
                if(cnt[v]==1)
                    c++;
            }

        }
    }

    return 0;
}

