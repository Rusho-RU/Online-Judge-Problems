#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        vector<int>skill[m];
        int cnt[n];

        memset(cnt, 0, sizeof cnt);

        for(int i=0; i<n; i++){
            int s, r;
            cin>>s>>r;
            s--;
            skill[s].push_back(r);
        }

        for(int i=0; i<m; i++)
            sort(skill[i].begin(), skill[i].end(), greater<int>());

        for(int i=0; i<m; i++){
            int sum = 0;
            for(int j=0; j<skill[i].size(); j++){
                sum+=skill[i][j];
                if(sum>0) cnt[j]+=sum;
            }
        }

        int ans = INT_MIN;

        for(int i=0; i<n; i++)
            ans = max(ans, cnt[i]);

        cout<<ans<<endl;
    }

    return 0;
}

