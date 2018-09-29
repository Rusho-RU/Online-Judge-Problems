#include <bits/stdc++.h>
using namespace std;

bool isLowerCase(char ch){
    if(ch>='a' && ch<='z')
        return true;
    return false;
}

bool isAC(const string& s){
    if(s[0]!='A')
        return false;

    int cnt=0;

    for(int i=2; i<s.size()-1; i++)
        if(s[i]=='C')
            cnt++;

    if(cnt!=1)
        return false;

    for(int i=1; i<s.size(); i++)
        if(!isLowerCase(s[i]) && s[i]!='C')
            return false;

    return true;
}

int main(){
    string s;

    while(cin>>s){
        if(isAC(s))
            puts("AC");
        else
            puts("WA");
    }

    return 0;
}
