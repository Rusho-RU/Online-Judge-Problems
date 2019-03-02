#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n];
        int mn = INT_MAX;

        for(int i=0; i<n; i++){
            cin>>data[i];
            mn = min(mn, data[i]);
        }

        int gcd = data[0];

        for(int i=1; i<n; i++){
            gcd = __gcd(gcd, data[i]);
        }

        cout<<gcd<<endl;
    }

    return 0;
}
