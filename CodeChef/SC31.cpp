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

        int weapon[10] = {};

        for(int i=0; i<n; i++){
            string s;
            cin>>s;

            for(int j=0; j<10; j++){
                weapon[j]^=(s[j]-'0');
            }
        }

        int cnt = 0;
        for(int i=0; i<10; i++){
            cnt+=weapon[i];
        }

        cout<<cnt<<endl;
    }

    return 0;
}

