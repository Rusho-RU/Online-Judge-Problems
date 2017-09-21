#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define MAX 1000001

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
    FasterIO;

    while(getline(cin,needle) && needle!="."){
        sz=needle.size()-1;
        needle+=needle;
        int ans = prefixFunction();
        ans -= sz;
        sz++;
        ans=sz/ans;
        cout<<ans<<endl;
    }
    return 0;
}

