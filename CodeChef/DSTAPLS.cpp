#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

bool check(long long n, long long k){
    if(k>1000000000)
        return false;

    while(k)
}

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        long long n, k;

        cin>>n>>k;

        if(k==1){
            cout<<"NO"<<endl;
            continue;
        }

        cout<<(check(n, k) ? "NO" : "YES")<<endl;
    }

    return 0;
}

