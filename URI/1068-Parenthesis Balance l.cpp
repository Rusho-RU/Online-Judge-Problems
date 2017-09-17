#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;

    while(cin>>s){
        stack<char>bracket;
        bool correct=true;

        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                if(!bracket.empty())
                    bracket.pop();
                else correct=false;
            }
            else if(s[i]=='(') bracket.push(s[i]);
        }

        if(bracket.empty() && correct) cout<<"correct"<<endl;
        else cout<<"incorrect"<<endl;
    }
    return 0;
}
