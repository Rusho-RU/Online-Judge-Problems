#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;
    string s;

    while(cin>>n>>s){
        bool possible = false;

        for(int i=1; i<n; i++){
            if(s[i]<s[i-1]){
                cout<<"YES\n";
                cout<<i<<" "<<i+1<<endl;
                possible = true;
                break;
            }
        }

        if(!possible){
            cout<<"NO\n";
        }
    }

    return 0;
}
