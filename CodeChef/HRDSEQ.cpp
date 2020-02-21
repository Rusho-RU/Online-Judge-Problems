#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int prev[130] = {}, seq[130] = {};

    prev[0] = 1;

    for(int i=3; i<130; i++){
        int last = seq[i-1];

        if(prev[last])
            seq[i] = i-1-prev[last];

        prev[seq[i]] = i;
    }

    for(int i=1; i<20; i++)
        cout<<seq[i]<<" ";

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int cnt=0;
        for(int i=1; i<=n; i++)
            if(seq[i]==seq[n])
                cnt++;

        cout<<cnt<<endl;
    }

    return 0;
}

