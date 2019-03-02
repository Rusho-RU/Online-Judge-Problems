#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        long long data[n+2], hold[n/2+1],mx = LONG_MIN;

        data[0] = hold[0] = 0;

        for(int i = 1; i<=n/2; i++){
            cin>>hold[i];
            mx = max(mx, hold[i]);
        }

        data[n+1] = mx;

        for(int i=1; i<=n/2; i++) {
            data[i] = data[i-1];

            int id = n-i+1;

            data[id] = hold[i] - data[i];

            if(data[id] > data[id+1]) {
                long long diff = data[id] - data[id+1];
                data[i] += diff;
                data[id] = data[id+1];
            }
        }

        for(int i=1; i<=n; i++){
            cout<<data[i];
            if(i==n)
                cout<<endl;
            else
                cout<<" ";
        }
    }
    return 0;
}

