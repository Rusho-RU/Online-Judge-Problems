#include <bits/stdc++.h>
using namespace std;

struct type{
    string main;
    string sorted;
};

int main(){
    vector<type>v;
    type temp;
    map<string,int>m;
    char c;
    int i=0;
    while(1){
        while(1){
            scanf("%c",&c);
            if(c=='#') break;
            if(c==' ' || c=='\n') break;
            temp.main+=c;
            if(c>='A' && c<='Z') c+=32;
            temp.sorted+=c;
        }
        if(c=='#') break;
        sort(temp.sorted.begin(),temp.sorted.end());
        m[temp.sorted]++;
        v.push_back(temp);
        temp.sorted.clear();
        temp.main.clear();
    }

    map<string,int>s;
    for(i=0;i<v.size();i++)
        if(m[v[i].sorted]==1)
            s[v[i].main];

    map<string,int>::iterator it=s.begin();
    for(i=0;it!=s.end();i++,it++)
        cout<<it->first<<endl;
    return 0;
}
