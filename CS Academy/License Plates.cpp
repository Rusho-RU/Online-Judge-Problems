#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;

    while(cin>>s){
        int d = 10, c = 26;
        long long ans = 1;

        if(s[0]=='d') ans = 10;
        else ans = 26;

        int decrease = 0;

        for(int i=1; i<s.size(); i++){
            if(s[i]==s[i-1])
                decrease = -1;

            if(s[i]=='d')
                ans *= 10 + decrease;
            else
                ans *= 26 + decrease;

            decrease = 0;
        }

        cout<<ans<<endl;
    }

    return 0;
}
