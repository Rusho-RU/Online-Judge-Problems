#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount(n) __builtin_popcount(n)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n+2], ans=0;

        data[0] = data[n+1] = 0;

        for(int i=1; i<=n; i++){
            cin>>data[i];
        }

        for(int i=1; i<=n; i++){
            if(!data[i] && data[i-1] && data[i+1]){
                data[i+1] = 0;
                ans++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
