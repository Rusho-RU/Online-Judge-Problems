#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n, m;
        long long mx;

        cin>>n>>m>>mx;

        long long a[n], b[m];

        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=0; i<m; i++)
            cin>>b[i];

        long long sum = 0;
        int ans = 0;

        int i, j=0;

        for(i=0; i<n && sum+a[i]<=mx; i++)
            sum+=a[i];

        while(1){
            while(j<m && sum+b[j] <= mx)
                sum += b[j++];

            ans = max(ans, i+j);

            if(i==0)
                break;

            sum-=a[--i];
        }

        cout<<ans<<endl;
    }

    return 0;
}
