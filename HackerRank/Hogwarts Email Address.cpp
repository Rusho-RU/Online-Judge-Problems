#include <bits/stdc++.h>
using namespace std;

string s;

bool check(){
    int i;
    string hold="hogwarts.com";
    if(s[5]!='@') return false;

    for(i=0;i<5;i++)
        if(s[i]<'a' || s[i]>'z')
            return false;

    string c;
    for(i=6;i<s.size();i++)
        c+=s[i];
    if(c!=hold) return false;
    return true;
}

int main(){
    while(cin>>s){
        if(check()) puts("Yes");
        else puts("No");
    }
    return 0;
}
