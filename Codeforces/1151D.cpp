#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        long long A=0, B=0, ans=0;
        long long data[n];

        for(int i=0; i<n; i++){
            int a, b;
            cin>>a>>b;
            A+=a;
            B+=b;
            data[i] = a-b;
        }

        ans = n*B-A;

        sort(data, data+n);

        for(int i=0, j=n; i<n; i++, j--)
            ans+=data[i]*j;

        cout<<ans<<endl;
    }

    return 0;
}

