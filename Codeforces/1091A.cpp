#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int y, b, r;

    while(cin>>y>>b>>r){
        int maximum = INT_MIN;

        for(int i=1, j=2, k=3; i<=y && j<=b && k<=r; i++, j++, k++)
            maximum = max(maximum, i+j+k);

        cout<<maximum<<endl;
    }

    return 0;
}

