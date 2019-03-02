#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, x, y;

    while(cin>>n>>x>>y){
        int cnt=0;

        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            if(val<=x)
                cnt++;
        }

        if(x>y)
            cout<<n<<endl;
        else{
            int ans = cnt/2;

            if(cnt&1)
                ans++;
            cout<<ans<<endl;
        }
    }

    return 0;
}
