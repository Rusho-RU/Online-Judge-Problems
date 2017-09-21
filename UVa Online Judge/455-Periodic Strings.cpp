#include <bits/stdc++.h>
using namespace std;

#define MAX 90

int pi[MAX*2], sz;
string needle;

int prefixFunction(){
    int now;
    pi[0]=now=-1;

    for(int i=1; i<needle.size(); i++){
        while(now!=-1 && needle[now+1]!=needle[i])
            now=pi[now];
        if(needle[now+1]==needle[i])
            pi[i]=++now;
        else
            pi[i]=now=-1;

        if(pi[i]==sz)
            return i;
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        cin>>needle;
        sz=needle.size()-1;
        needle+=needle;
        int ans = prefixFunction();
        ans -= sz;
        cout<<ans<<endl;
        if(t)
            cout<<endl;
    }
    return 0;
}
