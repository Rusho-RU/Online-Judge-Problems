#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n+1];

        for(int i=1; i<=n; i++)
            cin>>data[i];

        int day = 0, mx = INT_MIN;

        for(int i=1; i<=n; i++){
            mx = max(mx, data[i]);
            if(mx==i)
                day++;
        }

        cout<<day<<endl;
    }

    return 0;
}

