#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;
    string s;
    map<string,int>m;
    while(scanf("%c",&c)==1){
        if(c>='A' && c<='Z') s+=c+32;

        else if(c>='a' && c<='z' || c=='-') s+=c;

        else{
            if(s[s.size()-1]=='-' && c=='\n')
                s.erase(s.begin()+s.size()-1);

            else if(!s.empty()){
                m[s]=1;
                s.clear();
            }
        }
    }
    map<string,int>::iterator it=m.begin();
    for(;it!=m.end();it++)
        cout<<it->first<<endl;
    return 0;
}
