#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n], temp[n];

        for(int i=0; i<n; i++){
            cin>>data[i];
            temp[i] = data[i];
        }

        sort(temp, temp+n, greater<>());

        for(int i=0; i<n; i++){
            if(data[i]==temp[0])
                cout<<temp[1]<<endl;
            else
                cout<<temp[0]<<endl;
        }
    }

    return 0;
}

