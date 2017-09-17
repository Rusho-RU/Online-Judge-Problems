#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char,bool>v;
    v['a']=true, v['e']=true, v['i']=true, v['o']=true, v['u']=true;
    v['A']=true, v['E']=true, v['I']=true, v['O']=true, v['U']=true;

    string s;
    getline(cin,s);
    int consonent=0, vowel=0;

    for(int i=0;i<s.size();i++){
        if(v.find(s[i])!=v.end()) vowel++;
        else if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z') consonent++;
    }

    printf("%d %d\n",vowel,consonent);
    return 0;
}
