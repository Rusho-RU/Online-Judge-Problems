#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        string s, t;
        cin>>s>>t;

        vector<int>v;

        int carry = 0;

        for(int i=0; i<n; i++){
            int x  = t[i] - 'a';
            int y = s[i] - 'a';
            v.push_back(x+y);
        }

        for(int i=n-1; i>0; i--){
            int div = v[i]/26;
            v[i]%=26;

            v[i-1]+=div;
        }

        //v[0]%=26;

        int rem = 0, div;

        for(int i=0; i<n; i++){
            v[i]+=rem;
            div = v[i]/2;

            char ch = div+'a';
            cout<<ch;

            rem = v[i]%2;
        }
        cout<<endl;
    }

    return 0;
}

