#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n];
        int mn = INT_MAX, total = 0;;

        for(int i=0; i<n; i++){
            cin>>data[i];
            mn = min(mn, data[i]);
            total+=data[i];
        }

        int ans = INT_MAX;
        total-=mn;

        for(int v=1; v<=100; v++){
            for(int i=0; i<n; i++){
                if(data[i]%v==0){
                    ans = min(ans, total-data[i]+data[i]/v+mn*v);
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}

