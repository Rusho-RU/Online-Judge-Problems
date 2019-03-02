#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int a[n+1], b[n+1], nxt[n+1];

        for(int i=1; i<=n; i++)
            cin>>a[i]>>b[i];

        if(n==3){
            cout<<"1 2 3"<<endl;
            continue;
        }

        for(int i=1; i<=n; i++){
            int c = a[i], d = b[i];

            if(a[c]==d || b[c]==d)
                nxt[i] = c;
            else
                nxt[i] = d;
        }

        int now = 1;

        for(int i=1; i<=n; i++){
            cout<<now<<" ";
            now = nxt[now];
        }
        cout<<endl;
    }

    return 0;
}

