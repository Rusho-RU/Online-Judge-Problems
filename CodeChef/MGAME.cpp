#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n, p;
        cin>>n>>p;

        long long hi = n/2 + 1;

        long long hold = p - hi + 1;

        if(n%2==0)
            hold++;

        long long ans = hold*hold + (hold+p-n)*(p-n);

        if(hold==p)
            ans = hold*hold*hold;

        cout<<ans<<endl;
    }

    return 0;
}


