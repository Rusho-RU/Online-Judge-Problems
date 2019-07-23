#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        long long data[n];

        for(int i=0; i<n; i++)
            cin>>data[i];

        vector<pair<long long, int> >diff;

        for(int i=1; i<n; i++)
            diff.push_back({data[i]-data[i-1], i-1});

        sort(all(diff), greater<>());

        bool done[n];

        memset(done, false, sizeof done);

        for(int i=0; i<k-1; i++){
            done[diff[i].second] = true;
        }

        long long ans=0;
        int prev=0;

        for(int i=0; i<n; i++){
            if(done[i]){
                ans+=data[i]-data[prev];
                prev=i+1;
            }
        }

        ans+=data[n-1]-data[prev];

        cout<<ans<<endl;
    }

    return 0;
}
