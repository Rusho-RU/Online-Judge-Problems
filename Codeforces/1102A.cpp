#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    long long n;

    while(cin>>n){
        n = (n*(n+1))/2;

        int ans = 0;

        if(n&1)
            ans^=1;

        cout<<ans<<endl;
    }

    return 0;
}
