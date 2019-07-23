#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        string s;
        cin>>s;

        int prefix[26][s.size()+1];

        for(int i=0; i<26; i++)
            prefix[i][0] = 0;

        for(int i=0; i<s.size(); i++){
            for(int j=0; j<26; j++)
                prefix[j][i+1] = prefix[j][i];
            prefix[s[i]-'a'][i+1]++;
        }

        int m;
        cin>>m;

        while(m--){
            int cnt[26] = {};
            string a;
            cin>>a;

            for(int i=0; i<a.size(); i++){
                cnt[a[i]-'a']++;
            }

            int ans = INT_MIN;

            for(int i=0; i<26; i++){
                if(cnt[i]){
                    int id = lower_bound(prefix[i], prefix[i]+s.size()+1, cnt[i]) - prefix[i];
                    ans = max(ans, id);
                }
            }

            cout<<ans<<endl;
        }
    }

    return 0;
}

