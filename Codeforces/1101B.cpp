#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    string s;

    while(cin>>s){
        int start = 0, end = s.size()-1;

        while(start<s.size() && s[start++]!='['){}

        if(start > end){
            cout<<"-1\n";
            continue;
        }

        while(end>0 && s[end--]!=']'){}

        if(start > end){
            cout<<"-1\n";
            continue;
        }

        while(start<s.size() && s[start++]!=':'){}

        if(start > end){
            cout<<"-1\n";
            continue;
        }

        while(end>0 && s[end--]!=':'){}

        if(start > end){
            cout<<"-1\n";
            continue;
        }

        int ans = 0;

        for(int i=start; i<=end; i++)
            if(s[i]=='|')
                ans++;
        cout<<ans+4<<endl;
    }

    return 0;
}
