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

        pair<int, int>data[n];

        for(int i=0; i<n; i++)
            cin>>data[i].second>>data[i].first;

        sort(data, data+n, greater<>());

        int ans = data[0].first;

        for(int i=1; i<n; i++){
            if(data[i].second!=data[i-1].second){
                ans+=data[i].first;
                break;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}

