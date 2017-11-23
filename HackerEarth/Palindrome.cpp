#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int ans = 0, sz = s.size()/2;

        for(int i=0; i<sz; i++){
            if(s[i]!=s[s.size()-i-1])
                ans += min(s[i]-'a'+1, s[s.size()-i-1]-'a'+1);
        }

        cout<<ans<<endl;
    }

    return 0;
}
