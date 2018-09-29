#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    cin.ignore();

    while(t--){
        string s, ans;
        getline(cin, s);

        int half = s.size()/2;

        for(int i= half-1; i>=0; i--)
            ans+=s[i];

        for(int i=s.size()-1; i>=half; i--)
            ans+=s[i];

        cout<<ans<<endl;
    }

    return 0;
}
