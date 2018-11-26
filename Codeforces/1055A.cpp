#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount __builtin_popcount

int a[1010];
int b[1010];

bool check(int n, int s){
    if(!a[1])
        return false;

    if(a[s])
        return true;

    if(!b[s])
        return false;

    for(int i=s+1; i<=n; i++)
        if(a[i] && b[i])
            return true;

    return false;
}

int main(){
    FasterIO;

    int n, s;

    while(cin>>n>>s){
        for(int i=1; i<=n; i++)
            cin>>a[i];

        for(int i=1; i<=n; i++)
            cin>>b[i];

        if(check(n, s))
            cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;
    }

    return 0;
}

