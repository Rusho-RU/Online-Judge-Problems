#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        long long ans = 0;

        for(int i=3; i<=n; i++)
            ans+=i*(i-1);

        cout<<ans<<endl;
    }

    return 0;
}

