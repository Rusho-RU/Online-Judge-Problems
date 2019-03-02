#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n], mx = INT_MIN;

        for(int i=0; i<n; i++){
            cin>>data[i];
            mx = max(mx, data[i]);
        }

        int ans = 0, j=0;

        for(int i=0; i<n; i++){
            if(data[i]!=mx){
                ans = max(ans, j);
                j=0;
                continue;
            }
            j++;
        }

        ans = max(ans, j);

        cout<<ans<<endl;
    }

    return 0;
}
