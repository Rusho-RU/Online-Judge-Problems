#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    string table;

    while(cin>>table){
        string s;
        bool possible = false;

        for(int i=0; i<5; i++){
            cin>>s;
            if(table[0]==s[0] || table[1]==s[1])
                possible = true;
        }

        if(possible)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}

