#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;

    while(cin>>s){
        if((s[0] == s[1] && s[1] == s[2]) || (s[3] == s[1] && s[1] == s[2]))
            puts("Yes");
        else
            puts("No");
    }

    return 0;
}
