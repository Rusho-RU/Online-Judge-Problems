#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int data[4];

    for(int i=0; i<4; i++){
        cin>>data[i];
    }

    sort(data, data+4);

    cout<<(data[3]-data[0])<<" "<<(data[3]-data[1])<<" "<<(data[3]-data[2])<<endl;

    return 0;
}

