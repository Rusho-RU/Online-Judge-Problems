#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount(n) __builtin_popcount(n)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        long long a,b,k;
        cin>>a>>b>>k;

        long long laaf = a-b;

        long long obsthan = (k/2)*laaf;

        if(k&1)
            obsthan+=a;

        cout<<obsthan<<endl;
    }

    return 0;
}

