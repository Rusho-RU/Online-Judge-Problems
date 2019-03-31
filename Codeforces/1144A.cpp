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
        string s;
        cin>>s;

        bool diverse = true;

        sort(all(s));

        int n = s.size();

        for(int i=1; i<n; i++){
            if(s[i] - s[i-1]!=1){
                diverse = false;
                break;
            }
        }

        if(diverse)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

    return 0;
}

