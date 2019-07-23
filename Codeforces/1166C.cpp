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

        for(int i=0; i<n; i++){
            cin>>data[i];
            if(data[i]<0)
                data[i]=-data[i];
        }

        sort(data, data+n);

        long long ans=0;

        for(int i=0; i<n; i++){
            int id = upper_bound(data, data+n, 2*data[i]) - data;
            id-=i+1;
            if(id)
                ans+=1LL*id;
        }

        cout<<ans<<endl;
    }

    return 0;
}

