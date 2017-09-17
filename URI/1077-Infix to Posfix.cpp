#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    map<char,int>p;
    p['+']=p['-']=1, p['*']=p['/']=2, p['^']=3;

    while(t--){
        string s,e;
        cin>>s;
        s='('+s+')';
        stack<char>b;

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                b.push(s[i]);
                continue;
            }
            if(s[i]==')'){
                while(!b.empty() && b.top()!='('){
                    e+=b.top();
                    b.pop();
                }
                b.pop();
                continue;
            }

            else if(p.find(s[i])==p.end()){
                e+=s[i];
                continue;
            }

            while(!b.empty() && p[b.top()]>=p[s[i]]){
                e+=b.top();
                b.pop();
            }
            b.push(s[i]);
        }

        cout<<e<<endl;
    }
}
