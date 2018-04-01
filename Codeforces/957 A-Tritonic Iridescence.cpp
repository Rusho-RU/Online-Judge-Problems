#include <bits/stdc++.h>
using namespace std;

bool check(const string& s){
    int n = s.size();

    for(int i=0; i<n-1; i++)
        if(s[i]!='?' && s[i]==s[i+1])
            return false;

    if(s[0]=='?' || s[n-1]=='?')
        return true;

    int i = 0, q=0;

    while(s[i]=='?')
        i++;

    for(; i<n; i++){
        while(s[i]=='?')
            q++, i++;
        if(q){
            if(q>1)
                return true;
            if(q==1 && s[i-q-1]==s[i])
                return true;
            q = 0;
        }
    }

    return false;
}

int main(){
    int n;

    while(cin>>n){
        string s;
        cin>>s;

        if(check(s))
            puts("Yes");
        else
            puts("No");
    }

    return 0;
}
