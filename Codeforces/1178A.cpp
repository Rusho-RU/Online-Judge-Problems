#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n], seat=0;

        for(int i=0; i<n; i++){
            cin>>data[i];
            seat+=data[i];
        }

        vector<int>v;
        v.push_back(1);
        int sum=data[0];

        for(int i=1; i<n; i++){
            if(data[0] >= 2*data[i]){
                v.push_back(i+1);
                sum+=data[i];
            }
        }

        if(seat < 2*sum){
            cout<<v.size()<<endl;
            for(auto val : v)
                cout<<val<<" ";
            cout<<endl;
        }

        else
            cout<<0<<endl;
    }

    return 0;
}

