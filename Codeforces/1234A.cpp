#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int q;
    cin>>q;

    while(q--){
        int n;
        int val, sum = 0;

        cin>>n;

        for(int i=0; i<n; i++){
            cin>>val;
            sum+=val;
        }

        cout<<sum/n + (sum%n!=0)<<endl;
    }

    return 0;
}

