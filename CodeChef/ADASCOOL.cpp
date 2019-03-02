#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        if(n%2==0 || m%2==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
