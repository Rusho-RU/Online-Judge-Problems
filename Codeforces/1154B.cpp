#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n];

        for(int i=0; i<n; i++)
            cin>>data[i];

        int ans = INT_MAX;

        for(int i=1; i<=100; i++){
            set<int>st;

            for(int j=0; j<n; j++){
                if(data[j]!=i)
                    st.insert(abs(data[j]-i));
            }

            if(st.size()>1)
                continue;

            int hold = -1;

            for(int j=0; j<n; j++)
                hold = max(hold, abs(data[j]-i));

            ans = min(ans, hold);
        }

        if(ans==INT_MAX)
            ans=-1;

        cout<<ans<<endl;
    }

    return 0;
}

