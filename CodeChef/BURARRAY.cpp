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
        long long n, q;
        cin>>n>>q;

        long long sum = 0;

        map<long long, bool>mp;

        while(q--){
            int type;
            cin>>type;

            if(type==1){
                long long x;
                cin>>x;
                x+=sum;

                mp.insert({x, 1});
            }

            else{
                long long l, r;
                cin>>l>>r;
                l+=sum, r+=sum;

                long long i;

                for(i=r; i>=l; i--){
                    if(mp.find(i)==mp.end()){
                        cout<<i<<endl;
                        sum+=i;
                        sum%=n;
                        break;
                    }
                }

                if(i==l-1)
                    cout<<"0\n";
            }
        }
    }

    return 0;
}

