#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void makeSame(string& s){
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z')
            s[i] = s[i] + 'a' - 'A';
    }
    return;
}

int cmp(const string& s1, const string& s2){
    for(int i=0; i<s1.size(); i++){
        if(s1[i] < s2[i])
            return -1;
        if(s1[i] > s2[i])
            return 1;
    }

    return 0;
}

int main(){
    FasterIO;
    string s1, s2;

    while(cin>>s1>>s2){
        makeSame(s1);
        makeSame(s2);

        int ans = cmp(s1, s2);
        cout<<ans<<endl;
    }

    return 0;
}
