#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n];

        int prefix[n+1];
        prefix[0] = 1;

        for(int i=1; i<=n; i++){
            cin>>data[i];

            prefix[i] = prefix[i-1]^data[i];
        }


    }

    return 0;
}

