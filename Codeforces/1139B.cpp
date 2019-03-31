#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        long long data[n];

        for(int i=0; i<n; i++)
            cin>>data[i];

        long long tot = data[n-1], mx = data[n-1];

        for(int i=n-2; i>=0; i--){
            mx = min(mx, data[i]);
            if(mx==data[i+1])
                mx--;
            mx = max(0LL, mx);

            tot+=mx;

            data[i] = mx;
        }

        cout<<tot<<endl;
    }

    return 0;
}

