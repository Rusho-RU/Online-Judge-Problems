#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        int data[n];
        int cnt[101] = {};

        for(int i=0; i<n; i++){
            cin>>data[i];
            data[i]%=k;
            cnt[data[i]]++;
        }

        int ans = cnt[0]/2;

        for(int i=1; i<=k/2; i++){
            if(i==k-i)
                ans+=cnt[i]/2;
            else
                ans+=min(cnt[i], cnt[k-i]);

        }

        cout<<ans*2<<endl;
    }

    return 0;
}

