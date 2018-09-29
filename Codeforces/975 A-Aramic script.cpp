#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    while(cin>>n){
        map<string, bool>mp;
        string s;

        while(n--){
            cin>>s;
            sort(s.begin(), s.end());
            string hold = "" + s[0];
            for(int i=1; i<s.size(); i++){
                if(s[i]!=s[i-1])
                    hold+=s[i];
            }

            mp[hold] = true;
        }

        int ans = mp.size();
        cout<<ans<<endl;
    }

    return 0;
}
