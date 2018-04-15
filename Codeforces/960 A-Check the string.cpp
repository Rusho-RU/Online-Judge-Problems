#include <bits/stdc++.h>
using namespace std;

bool solve(const string& s){
    int i,a=0, b=0, c=0;

    for(i=0; i<s.size(); i++){
        if(s[i]!='a')
            break;
        a++;
    }

    for(; i<s.size(); i++){
        if(s[i]=='a')
            return false;
        else if(s[i]=='c')
            break;
        b++;
    }

    for(; i<s.size(); i++){
        if(s[i]!='c')
            return false;
        c++;
    }

    if(a==0 || b==0 || c==0)
        return false;

    if(c==a || c==b)
        return true;

    return false;
}

int main(){
    string s;

    while(cin>>s){
        if(solve(s))
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}
