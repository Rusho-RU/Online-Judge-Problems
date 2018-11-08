#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;

        long long total = a/b;
        long long diff = d/b - (c-1)/b;

        cout<<total-diff<<endl;
    }

    return 0;
}
