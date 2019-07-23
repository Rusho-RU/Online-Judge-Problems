#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int data[3], d;

    while(cin>>data[0]>>data[1]>>data[2]>>d){
        sort(data, data+3);

        int ans=0;

        if(d>abs(data[0]-data[1]))
            ans = d-abs(data[0]-data[1]);
        if(d>abs(data[1]-data[2]))
            ans+=d-abs(data[1]-data[2]);

        cout<<ans<<endl;
    }

    return 0;
}

