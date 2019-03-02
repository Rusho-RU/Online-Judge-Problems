#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        string s;
        bool has = false;

        while(cin>>s && cin.get()!='\n'){
            if(s=="not")
                has = true;
        }

        if(s=="not")
            has = true;


        if(has)
            cout<<"Real Fancy\n";
        else
            cout<<"regularly fancy\n";
    }

    return 0;
}

