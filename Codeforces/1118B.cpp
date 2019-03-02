#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n+2], odd[n+2], even[n+2];

        odd[0] = even[0] = 0;

        for(int i=1; i<=n; i++){
            cin>>data[i];
            odd[i] = odd[i-1];
            even[i] = even[i-1];
            if(i&1)
                odd[i]+=data[i];
            else
                even[i]+=data[i];
        }

        int cnt=0;

        for(int i=1; i<=n; i++){
            int e = even[i-1] + (odd[n]-odd[i]);
            int o = odd[i-1] + (even[n] - even[i]);

            if(e==o)
                cnt++;
        }

        cout<<cnt<<endl;
    }

    return 0;
}
