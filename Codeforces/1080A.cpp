#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        int r = 2*n;
        int g = 5*n;
        int b = 8*n;

        int total = 0;

        total+=r/k;
        total+=g/k;
        total+=b/k;

        if(r%k) total++;
        if(g%k) total++;
        if(b%k) total++;

        cout<<total<<endl;
    }

    return 0;
}

