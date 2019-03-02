#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int check(){
    int n, x, y, d;
    cin>>n>>x>>y>>d;

    if(abs(x-y)%d==0)
        return abs(x-y)/d;

    int mn = INT_MAX, val;

    if((y-1)%d==0){
        val = (y-1)/d + (x-1)/d;
        if((x-1)%d)
            val++;
        mn = min(mn, val);
    }

    if((n-y)%d==0){
        val = (n-y)/d + (n-x)/d;
        if((n-x)%d)
            val++;
        mn = min(mn, val);
    }

    if(mn==INT_MAX)
        return -1;
    return mn;
}

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int ans = check();

        cout<<ans<<endl;
    }

    return 0;
}

