#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool allSame(const string& s){
    for(int i=1; i<s.size(); i++)
        if(s[i]!=s[i-1])
            return false;

    return true;
}

int main(){
    FasterIO;

    string s;
    int t;
    cin>>t;

    while(t--){
        cin>>s;

        if(allSame(s)){
            cout<<"-1\n";
            continue;
        }

        sort(s.begin(), s.end());

        cout<<s<<endl;
    }

    return 0;
}

