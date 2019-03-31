#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int t, Case=0;
    cin>>t;

    while(t--){
        int n, p;
        cin>>n>>p;

        long long skill[n], ans = LLONG_MAX;

        for(int i=0; i<n; i++)
            cin>>skill[i];

        sort(skill, skill+n);

        long long prefix[n+1];
        prefix[0] = 0;

        for(int i=0; i<n; i++){
            prefix[i+1] = prefix[i]+skill[i];
        }

        for(int i=p; i<=n; i++){
            ans = min(ans, abs(skill[i-1]*p - (prefix[i]-prefix[i-p])));
        }

        cout<<"Case #"<<++Case<<": "<<ans<<endl;
    }

    return 0;
}

