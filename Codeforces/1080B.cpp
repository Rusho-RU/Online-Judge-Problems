#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int sum(int n){
    if(n&1)
        return -(++n/2);
    return n/2;
}

int main(){
    FasterIO;

    int q;

    while(cin>>q){
        int l, r;

        while(q--){
            cin>>l>>r;
            int ans = sum(r) - sum(l-1);
            cout<<ans<<endl;
        }

    }

    return 0;
}

