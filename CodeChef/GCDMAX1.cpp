#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAX 500010

int n, k, data[MAX], prefix[MAX], suffix[MAX];

bool check(int seg){
    for(int i=1; i<=n; i+=seg){
        int l = i, r = min(i+seg-1, n);

        prefix[l] = data[l];
        for(int j=l+1; j<=r; j++)
            prefix[j] = __gcd(prefix[j-1], data[j]);

        suffix[r] = data[r];
        for(int j=r-1; j>=l; j--)
            suffix[j] = __gcd(suffix[j+1], data[j]);
    }

    for(int i=1; i+seg-1<=n; i++)
        if(__gcd(suffix[i], prefix[i+seg-1])>=k)
            return true;
    return false;
}

int bSearch(){
    int l=1, r=n+1;

    while(l<r){
        int mid = (l+r)/2;

        if(check(mid))
            l = mid+1;
        else
            r = mid;
    }

    return l-1;
}

int main(){
    FasterIO;

    while(cin>>n>>k){
        for(int i=1; i<=n; i++)
            cin>>data[i];

        int ans = bSearch();

        cout<<ans<<"\n";
    }

    return 0;
}

