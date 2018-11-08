#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int ans = 1;

        if(n){
            int ones = __builtin_popcount(n);

            ans = (1<<ones);
        }

        cout<<ans<<endl;
    }

    return 0;
}
