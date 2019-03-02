#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        char ch;
        int x, y;
        int mxx = INT_MIN, mxy = INT_MIN;

        while(n--){
            cin>>ch>>x>>y;
            if(ch=='+'){
                mxx = max(mxx, min(x, y));
                mxy = max(mxy, max(x, y));
            }

            else{
                if((mxx<=x && mxy<=y) || (mxx<=y && mxy<=x))
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
        }
    }

    return 0;
}
