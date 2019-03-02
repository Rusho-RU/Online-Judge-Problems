#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    long long n, k, m;

    while(cin>>n>>k>>m){
        long long data[n], sum[n];

        for(int i=0; i<n; i++)
            cin>>data[i];

        if(n==1){
            cout<<setprecision(10)<<1.0*(data[0]+min(k, m))<<endl;
            continue;
        }

        sort(data, data+n);

        sum[0] = data[0];

        for(int i=1; i<n; i++){
            sum[i] = sum[i-1] + data[i];
        }

        double ans = 1.0*sum[n-1]/n;

        for(int i=1; i<n; i++){
            long long hold = sum[i] - sum[i-1];
            hold+=min(k*(n-i), m-i);

            ans = max(ans, 1.0*hold/(n-i));
        }

        cout<<setprecision(10)<<ans<<endl;
    }

    return 0;
}
