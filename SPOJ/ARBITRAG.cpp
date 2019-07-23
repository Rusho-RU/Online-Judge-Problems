#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, Case=0;

    while(cin>>n && n){
        map<string, int>mp;

        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            mp[s] = i;
        }

        double adj[n][n];

        memset(adj, 0.0, sizeof adj);

        int m;
        cin>>m;

        for(int i=0; i<m; i++){
            string su, sv;
            double val;

            cin>>su>>val>>sv;

            int u = mp[su], v = mp[sv];
            adj[u][v] = val;
        }

        for(int k=0; k<n; k++){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    adj[i][j] = max(adj[i][j], adj[i][k]*adj[k][j]);
                }
            }
        }

        bool possible = false;

        for(int i=0; i<n; i++)
            if(adj[i][i]>1)
                possible = true;

        cout<<"Case "<<++Case<<": "<<(possible ? "Yes" : "No")<<endl;
    }

    return 0;
}

