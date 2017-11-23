#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;

    while(cin>>s){
        int pos[26] = {};
        int previous[26] = {};

        memset(previous, -1, sizeof previous);

        for(int i=0; i<s.size(); i++){
            int indx = s[i] - 'a';
            pos[indx] = max(pos[indx], i-previous[indx]);
            previous[indx] = i;
        }

        int ans = 100011, sz = s.size();

        for(int i=0; i<26; i++){
            pos[i] = max(pos[i], sz-previous[i]);
            ans = min(ans, pos[i]);
        }

        cout<<ans<<endl;
    }

    return 0;
}
