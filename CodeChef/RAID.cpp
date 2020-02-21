#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int h[n], p[n];

        for(int i=0; i<n; i++)
            cin>>p[i];

        for(int i=0; i<n; i++)
            cin>>h[i];

        sort(p, p+n);
        sort(h, h+n);

        bool win = true;

        for(int i=0; i<n; i++){
            if(p[i]>=h[i])
                win =false;
        }

        cout<<(win ? "WIN" : "SURRENDER")<<endl;
    }

    return 0;
}

