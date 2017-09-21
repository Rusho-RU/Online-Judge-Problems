#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    int i;
    stack<char>first;
    for(i=0;i<s.size();i++){
        if(s[0]=='\n') return true;
        if(s[i]=='(' || s[i]=='[')
            first.push(s[i]);
        else if(s[i]==')' || s[i]==']'){
            if(!first.size()) return false;
            char hold=first.top();
            first.pop();
            if(hold=='(' && s[i]==')' || hold=='[' && s[i]==']') continue;

            else return false;
        }
    }
    if(first.size()) return false;

    else return true;
}

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    while(n--){
        string s;
        getline(cin,s);
        if(check(s)) printf("Yes\n");

        else printf("No\n");
    }

    return 0;
}
