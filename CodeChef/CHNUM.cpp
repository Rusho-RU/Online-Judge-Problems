#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int pos = 0, neg=0;

        for(int i=0, val; i<n; i++){
            cin>>val;

            val<0 ? neg++ : pos++;
        }

        if(!neg)
            cout<<pos<<" "<<pos<<endl;
        else if(!pos)
            cout<<neg<<" "<<neg<<endl;
        else
            cout<<max(pos, neg)<<" "<<min(pos, neg)<<endl;
    }

    return 0;
}
