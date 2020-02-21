#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

long long data[2010];
int n;

bool f(int mid){
    int j;
    bool found;
    for(int i=0; i<n-mid; i++){
        found = true;
        for(j=0; j<n && found; j++){
            if(j>=i && j<=i+mid)
                continue;
            for(int k=j+1; k<n && found; k++){
                if(k>=i && k<=i+mid)
                    continue;
                if(data[j]==data[k])
                    found = false;
            }
        }

        if(j==n)
            return true;
    }

    return false;
}

int main(){
    FasterIO;

    while(cin>>n){
        for(int i=0; i<n; i++)
            cin>>data[i];

        int lo = 0, hi = n;

        while(lo<hi){
            int mid = (lo+hi)/2;

            if(f(mid))
                hi = mid;
            else
                lo = mid+1;
        }

        if(hi)
            hi++;

        cout<<hi<<endl;
    }

    return 0;
}

