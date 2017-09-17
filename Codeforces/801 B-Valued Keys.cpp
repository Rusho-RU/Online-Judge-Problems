#include <bits/stdc++.h>
using namespace std;

bool check(string s1, string s2){
    for(int i=0;i<s1.size();i++){
        if(s1[i]<s2[i]) return false;
    }
    return true;
}

int main(){
    string s1,s2;
    while(cin>>s1>>s2){
        if(!check(s1,s2)) printf("-1\n");
        else cout<<s2<<endl;
    }
    return 0;
}
