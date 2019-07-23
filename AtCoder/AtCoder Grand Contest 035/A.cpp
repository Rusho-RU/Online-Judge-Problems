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

        for(int i=0; i<n; i++)
            cin>>data[i];

        int XOR = 0;

        for(int i=0; i<n; i++){
            XOR^=data[i];
        }

        cout<<(!XOR ? "Yes" : "No")<<endl;
    }

    return 0;
}

