#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        long long data[n];

        for(int i=0; i<n; i++)
            cin>>data[i];

        sort(data, data+n);

        long long ans = 0;

        for(int i=0, j=n-1; i<n/2; i++, j--){
            ans+=(data[i]+data[j])*(data[i]+data[j]);
        }

        cout<<ans<<endl;
    }

    return 0;
}
