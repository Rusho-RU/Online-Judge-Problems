#include <bits/stdc++.h>
using namespace std;

bool isDigit(char ch){
    if(ch>='0' && ch<='9')
        return true;
    return false;
}

int toDigit(char ch){
    return ch-'0';
}

bool isVowel(char ch){
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='Y')
        return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(0);

    string s;

    while(cin>>s){
        bool valid = true;

        if((toDigit(s[0]) + toDigit(s[1]))&1 || (toDigit(s[3]) + toDigit(s[4]))&1 ||
           (toDigit(s[4]) + toDigit(s[5]))&1 || (toDigit(s[7]) + toDigit(s[8]))&1)
             valid = false;

        if(isVowel(s[2]))
            valid = false;

        if(valid)
            cout<<"valid\n";
        else
            cout<<"invalid\n";
    }

    return 0;
}
