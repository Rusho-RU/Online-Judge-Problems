#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int check(long long mid, long long n, long long k){
    long long tot = (mid*(mid+1))/2;
    long long rem = tot-(n-mid);

    if(rem==k)
        return 0;
    else if(rem<k)
        return -1;
    return 1;
}

int main(){
    FasterIO;

    long long n, k;

    while(cin>>n>>k){
        long long lo=0, hi=n, mid;

        while(lo<=hi){
            mid = (lo+hi)/2;

            int sign = check(mid, n, k);

            if(sign==0)
                break;
            else if(sign==-1)
                lo = mid+1;
            else
                hi = mid-1;
        }

        long long ans = n-mid;

        cout<<ans<<endl;
    }

    return 0;
}

