#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int t, n, cnt[26];
    string s;

    cin>>t;

    while(t--){
        cin>>n;

        memset(cnt, 0, sizeof cnt);

        for(int i=0; i<n; i++){
            cin>>s;
            s+="0";
            sort(s.begin(), s.end());
            for(int j=1; j<s.size(); j++){
                if(s[j]!=s[j-1])
                    cnt[s[j] - 'a']++;
            }
        }

        int ans = 0;

        for(int i=0; i<26; i++)
            if(cnt[i]==n)
                ans++;
        cout<<ans<<endl;
    }

    return 0;
}

