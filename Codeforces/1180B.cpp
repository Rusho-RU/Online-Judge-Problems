#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n];

        for(int i=0; i<n; i++){
            cin>>data[i];

            if(data[i]>=0)
                data[i] = -data[i]-1;
        }

        pair<int, int>p(INT_MAX, -1);

        for(int i=0; i<n; i++)
            p = min(p, {data[i], i});

        if(n&1)
            data[p.second] = -data[p.second]-1;

        for(int i=0; i<n; i++)
            cout<<data[i]<<" ";

        cout<<endl;
    }

    return 0;
}

