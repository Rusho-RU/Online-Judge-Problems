#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;
    string s;

    while(cin>>n>>s){
        string ans;

        for(int i=0, j=1; i<n; i++, j++){
            ans+=s[i];
            i+=j;
        }

        cout<<ans<<endl;
    }

    return 0;
}


