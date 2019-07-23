#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

long long data[300010], prefix[300010];

long long f(int mid, int n, long long k, int m){
    long long mx = LLONG_MIN;
    long long cnst = mid*k*(mid/m + (mid%m!=0));

    for(int i=mid; i<=n; i++)
        mx = max(mx, (prefix[i]-prefix[i-mid]) - cnst);

    return mx;
}

int main(){
    FasterIO;

    int n, m;
    long long k;

    while(cin>>n>>m>>k){
        for(int i=1; i<=n; i++)
            cin>>data[i];

        prefix[0] = 0;
        for(int i=1; i<=n; i++)
            prefix[i] = prefix[i-1]+data[i];

        int lo=0, hi=n;
        long long mx = 0;

        while(lo+1<hi){
            int mid = (lo+hi)/2;

            long long hold = f(mid, n, k, m);

            if(hold>=mx)
                lo = mid, mx = hold;

            else
                hi = mid-1;
        }

        cout<<lo<<endl;
        cout<<f(lo, n, k, m)<<endl;
    }

    return 0;
}

