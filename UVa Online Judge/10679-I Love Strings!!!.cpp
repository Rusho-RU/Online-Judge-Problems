#include <bits/stdc++.h>
using namespace std;

string needle,hay;
int pi[1010];

void pref(){
    int now=-1;
    pi[0]=-1;

    for(int i=1;i<needle.size();i++){
        while(now!=-1 && needle[now+1]!=needle[i])
            now=pi[now];
        if(needle[now+1]==needle[i])
            pi[i]=++now;
        else now=-1;
    }
    return;
}

bool kmp(){
    int now=-1;

    for(int i=0;i<hay.size();i++){
        while(now!=-1 && needle[now+1]!=hay[i])
            now=pi[now];
        if(needle[now+1]==hay[i])
            ++now;
        else
            now=-1;
        if(now==needle.size()-1)
            return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        cin>>hay;
        int q;
        cin>>q;
        while(q--){
            cin>>needle;
            pref();
            if(kmp()) puts("y");
            else puts("n");
        }
    }
    return 0;
}
