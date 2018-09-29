#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

char shift(char ch){
    if(ch>='a' && ch<='z')
        return 'a' + (ch - 'a' + 13)%26;
    else
        return 'A' + (ch - 'A' + 13)%26;
}

bool isLetter(char ch){
    if(ch>='A' && ch<='Z') return true;
    if(ch>='a' && ch<='z') return true;
    return false;
}

int main(){
    string s;

    while(getline(cin, s)){
        string encoded;

        for(int i=0; i<s.size(); i++){
            if(isLetter(s[i]))
                encoded+=shift(s[i]);
            else
                encoded+=s[i];
        }

        cout<<encoded<<endl;
    }
}
