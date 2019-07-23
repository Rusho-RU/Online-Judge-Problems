#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        int t, l, r;

        int data[n];

        for(int i=0, j=n; i<n; i++, j--)
            data[i] = j;

        vector<pair<int, int> >v[2];

        while(m--){
            cin>>t>>l>>r;
            v[t].push_back({l, r});
        }

        sort(all(v[1]));

        for(int i=0; i<v[1].size(); i++){
            int l = v[1][i].first, r = v[1][i].second;

            for(int i=l; i<r; i++)
                data[i] = data[l-1];
        }

        bool possible = true;

        for(int i=0; i<v[0].size() && possible; i++){
            int l = v[0][i].first, r = v[0][i].second, j;

            for(j=l; j<r; j++){
                if(data[j]<data[j-1]){
                    break;
                }
            }

            if(j==r)
                possible = false;
        }

        if(!possible)
            cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(int i=0; i<n; i++)
                cout<<data[i]<<" ";
            cout<<endl;
        }
    }

    return 0;
}

