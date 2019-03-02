#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

long long sum(long long n, long long k){
    long long h = n/k - 1;

    return h + ((h*(h+1))/2) * k + 1;
}

int main(){
    FasterIO;

    long long n;

    while(cin>>n){
        if(n&1){
            cout<<1<<" "<<((n*(n+1))/2)<<endl;
            continue;
        }

       vector<long long>v;

       v.push_back(1);
       v.push_back((n*(n+1))/2);

       for(long long i=2; i*i<=n; i++){
            if(n%i) continue;
            v.push_back(sum(n, i));
            if((n/i)!=i)
                v.push_back(sum(n, n/i));
       }

       sort(v.begin(), v.end());

       for(auto val : v)
            cout<<val<<" ";
       cout<<endl;
    }

    return 0;
}

