#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int zero = 0, one = 0;
        int data[n];

        for(int i=0; i<n; i++){
            cin>>data[i];
            data[i] ? one++ : zero++;
        }

        int ans = 1;

        for(int i=0; i<n; i++){
            if(zero==0 || one==0)
                break;

            data[i] ? one-- : zero--;

            ans=i+1;
        }

        cout<<ans<<endl;
    }

    return 0;
}

