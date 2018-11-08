#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n, k, cnt=0;
        cin>>n>>k;

        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            if(val!=1)
                cnt++;
        }

        if(cnt>k)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

    return 0;
}
