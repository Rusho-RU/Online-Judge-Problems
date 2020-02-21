#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    long long a, b, n;
    int t;

    cin>>t;

    while(t--){
        cin>>a>>b>>n;
        if(n%3==0)
            cout<<a;
        else if(n%3==1)
            cout<<b;
        else
            cout<<(a^b);

        cout<<endl;
    }

    return 0;
}

