#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define MAX 1050

int needle[MAX], pi[MAX];

void prefixFunction(int n){
    int now;
    now=pi[0]=-1;

    for(int i=1;i<n;i++){
        while(now!=-1 && needle[now+1]!=needle[i])
            now=pi[now];
        if(needle[now+1]==needle[i])
            pi[i]=++now;
        else
            pi[i]=now=-1;
    }

    for(int i=0; i<n; i++)


    return;
}

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        for(int i=0; i<n; i++)
            cin>>needle[i];

        for(int i=n-1; i>0; i--)
            needle[i] = needle[i] - needle[i-1];

        prefixFunction(n);
    }
}
