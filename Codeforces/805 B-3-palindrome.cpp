#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1="aa",s2="bb";
    int n;
    while(scanf("%d",&n)==1){
        string s;
        int hold=n;
        if(n%2) hold--;
        hold/=2;
        for(int i=0;i<hold;i++){
            if(i%2) s+=s2;
            else s+=s1;
        }
        if(n%2)
            if(s[s.size()-1]=='b') s+='a';
            else s+='b';
        cout<<s<<endl;
    }
    return 0;
}
