#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int cnt_div(int n){
    int cnt = 1;
    int freq=0;

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            freq=0;
            while(n%i==0){
                n/=i;
                freq++;
            }
            cnt*=(freq+1);
        }
    }

    if(n!=1){
        cnt*=2;
    }

    return cnt;
}

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        int ans=0, cnt_k = cnt_div(k);

        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            if(cnt_div(val)==cnt_k)
                ans++;
        }

        cout<<ans<<endl;
    }

    return 0;
}

