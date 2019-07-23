#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        string s;

        cin>>s;

        int data[] = {'A', 'C', 'T', 'G'};

        int ans = INT_MAX;

        for(int i=3; i<n; i++){
            int sum = 0;
            for(int j=3; j>=0; j--){
                int hold = abs(data[j]-s[i-3+j]);
                sum+=min(hold, 26-hold);
            }
            ans = min(ans, sum);
        }

        cout<<ans<<endl;
    }

    return 0;
}

