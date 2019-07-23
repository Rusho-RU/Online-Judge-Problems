#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

bool check(long long data[], int n, long long target, long long k){
    for(int i=0; i<n; i++){
        if(abs(data[i]-target)>k)
            return false;
    }

    return true;
}

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        long long k;
        cin>>n>>k;

        long long data[n], sum=0;

        for(int i=0; i<n; i++){
            cin>>data[i];
        }

        sort(data, data+n);

        if(data[0]+k >= data[n-1]-k){
            cout<<data[0]+k<<endl;
        }
        else
            cout<<-1<<endl;
    }

    return 0;
}

