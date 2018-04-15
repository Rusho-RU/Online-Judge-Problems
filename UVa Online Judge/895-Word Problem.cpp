#include <bits/stdc++.h>
using namespace std;

int cnt[1010][26];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    int words=0;

    while(cin>>s && s!="#"){
        for(int i=0; i<s.size(); i++){
            cnt[words][s[i]-'a']++;
        }
        words++;
    }

    getline(cin,s);

    while(getline(cin,s) && s!="#"){
        int rem[26], ans=0;
        memset(rem, 0, sizeof rem);

        for(int i=0; i<s.size(); i++){
            if(s[i]>='a' && s[i]<='z')
                rem[s[i]-'a']++;
        }

        for(int i=0; i<words; i++){
            bool hobe = true;
            for(int j=0; j<26; j++){
                if(cnt[i][j] > rem[j])
                    hobe = false;
            }
            if(hobe)
                ans++;
        }

        cout<<ans<<endl;
    }

    return 0;
}
