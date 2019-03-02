#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        int data[n];

        for(int i=0; i<n; i++) cin>>data[i];

        int cnt = 1, ans = 1;

        for(int i=1; i<n; i++){
            if(data[i]!=data[i-1])
                cnt++;
            else{
                ans = max(ans, cnt);
                cnt = 1;
            }
        }

        ans = max(ans, cnt);

        cout<<ans<<endl;
    }

    return 0;
}

