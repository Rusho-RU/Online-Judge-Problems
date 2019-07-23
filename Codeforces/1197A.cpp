#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int data[n];

        for(int i=0; i<n; i++)
            cin>>data[i];

        sort(data, data+n);

        cout<<min(n-2, data[n-2]-1)<<endl;
    }

    return 0;
}

