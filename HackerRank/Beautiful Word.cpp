#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char,bool>vowel;
    vowel['a']=true,vowel['o']=true,vowel['e']=true,vowel['i']=true,vowel['u']=true,vowel['y']=true;
    string s;
    while(cin>>s){
        bool beautiful=true;
        for(int i=1;i<s.size() && beautiful;i++)
            if(s[i]==s[i-1]) beautiful=false;
            else if(vowel[s[i-1]] && vowel[s[i]]) beautiful=false;
        if(beautiful) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
