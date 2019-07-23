#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

bool check(long long mid, long long k, long long n, long long a, long long b){
    k-=mid*a;
    n-=mid;

    if(k<=0) return false;

    long long num = k/b;
    if(k%b==0)
        num--;

    if(num<n)
        return false;

    return true;
}

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        long long k, n, a, b;

        cin>>k>>n>>a>>b;

        long long lo=0, hi=n;

        while(lo<=hi){
            long long mid = (lo+hi)/2;

            if(check(mid, k, n, a, b))
                lo = mid+1;
            else
                hi=mid-1;
        }

        long long ans = lo-1;

        if(check(ans, k, n, a, b))
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}
