#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount(n) __builtin_popcount(n)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        string s;
        cin>>s;

        bool found = false;

        for(int i=1; i<s.size(); i++){
            if(found || s[i-1]<=s[i])
                cout<<s[i-1];

            else
                found = true;
        }

        if(found)
            cout<<s[n-1];

        cout<<endl;
    }

    return 0;
}
