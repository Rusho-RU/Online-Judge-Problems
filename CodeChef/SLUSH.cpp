#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        int ans[n], tot=0, c[m+1];

        vector<pair<int, int> >rem;
        vector<int>v;

        for(int i=1; i<=m; i++)
            cin>>c[i];

        for(int i=0; i<n; i++){
            int d, f, b;
            cin>>d>>f>>b;

            if(c[d]){
                ans[i] = d;
                tot+=f;
                c[d]--;
            }

            else{
                v.push_back(i);
                tot+=b;
            }
        }

        for(int i=1; i<=m; i++){
            if(c[i])
                rem.push_back({i, c[i]});
        }

        for(int i=0; i<v.size(); i++){
            ans[v[i]] = rem.back().first;
            rem.back().second--;

            if(rem.back().second==0)
                rem.pop_back();
        }

        cout<<tot<<endl;
        for(int i=0; i<n; i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }

    return 0;
}

