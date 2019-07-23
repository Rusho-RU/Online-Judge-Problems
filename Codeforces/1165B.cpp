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

        for(int i=0; i<n; i++)
            cin>>data[i];

        sort(data, data+n);

        int now=1;

        for(int i=0; i<n; i++){
            if(data[i]>=now)
                now++;
        }

        cout<<now-1<<endl;
    }

    return 0;
}

