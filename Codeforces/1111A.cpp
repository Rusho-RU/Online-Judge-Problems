#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool isVowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return true;
    return false;
}

bool possible(char a, char b){
    if(isVowel(a) && isVowel(b)){
        return true;
    }

    if(isVowel(a) || isVowel(b))
        return false;
    return true;
}

int main(){
    FasterIO;

    string s, t;

    while(cin>>s>>t){
        int i, j;

        for(i=0, j=0; i<s.size() && j<t.size(); i++, j++){
            if(!possible(s[i], t[i]))
                break;
        }

        if(i==s.size() && j==t.size())
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

    return 0;
}
