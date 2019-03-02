#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        long long a, b, c;
        cin>>a>>b>>c;

        long long ans = c;

        if(a<=c){
            ans = b/c;
            ans++;
            ans*=c;
        }

        cout<<ans<<endl;
    }

    return 0;
}

