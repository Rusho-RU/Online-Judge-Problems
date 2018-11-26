#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount __builtin_popcount

long long sum(long long n){
    return n*(n+1)/2;
}

long long num(long long mid, long long k){
    return sum(k) - sum(mid-1);
}

long long solve(long long n, long long k){
    if(n==1)
        return 0;

    if(n<=k)
        return 1;

    k--, n--;

    if(sum(k) < n)
        return -1;

    long long hi=k, lo=1, mid;

    while(lo < hi){
        mid = (lo+hi)/2;

        long long v = num(mid, k);

        if(v==n)
            return k-mid+1;

        if(v>n)
            lo = mid+1;
        else
            hi = mid;
    }

    return k - lo + 2;
}

int main(){
    FasterIO;

    long long n, k;

    while(cin>>n>>k){
        long long ans = solve(n, k);
        cout<<ans<<endl;
    }

    return 0;
}
