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
        int n;
        cin>>n;

        string s, r;
        cin>>s>>r;

        sort(all(s));
        sort(all(r));

        cout<<(s==r ? "YES" : "NO")<<endl;
    }

    return 0;
}
