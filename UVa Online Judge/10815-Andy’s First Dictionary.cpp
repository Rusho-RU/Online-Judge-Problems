#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>m;
    string s;
    char c;
    while(scanf("%c",&c)!=EOF){
        if(c>='A' && c<='Z') s+=c+32;

        else if(c>='a' && c<='z') s+=c;

        else{
            if(!s.empty()) m[s];
            s.clear();
        }

    }
    map<string,int>::iterator it=m.begin();

    for(;it!=m.end();it++)
        cout<<it->first<<endl;

    return 0;
}
