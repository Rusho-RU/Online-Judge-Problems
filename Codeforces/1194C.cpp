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
        string s, t, p;

        cin>>s>>t>>p;

        int i;

        for(i=0; i<t.size(); i++){
            if(i==s.size() || s[i]!=t[i]){
                int id = p.find(t[i]);

                if(id==p.npos)
                    break;

                s.insert(s.begin()+i, t[i]);
                p.erase(p.begin()+id);
            }
        }

        if(i==t.size() && s==t)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

    return 0;
}
