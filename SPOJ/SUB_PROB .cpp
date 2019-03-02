#include <bits/stdc++.h>
using namespace std;

#define MAX 100010
#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int pi[MAX];
string hay,needle;

void prefixFunction(){
    int now;
    now=pi[0]=-1;

    for(int i=1;i<needle.size();i++){
        while(now!=-1 && needle[now+1]!=needle[i])
            now=pi[now];
        if(needle[now+1]==needle[i])
            pi[i]=++now;
        else
            pi[i]=now=-1;
    }

    return;
}

int KMP(){
    int now=-1, cnt=0;

    for(int i=0;i<hay.size();i++){
        while(now!=-1 && needle[now+1]!=hay[i])
            now=pi[now];
        if(needle[now+1]==hay[i])
            ++now;
        else
            now=-1;

        if(now==needle.size()-1)
            cnt++, now=pi[now];
    }

    return cnt;
}

int main(){
    FasterIO;

    cin>>hay;
    int pattern;
    cin>>pattern;

    while(pattern--){
        cin>>needle;
        prefixFunction();
        KMP() ? cout<<"Y\n" : cout<<"N\n";
    }

    return 0;
}
