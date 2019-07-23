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
        int cnt=0;

        for(int i=0; i<n; i++){
            cin>>data[i];
            if(data[i]==1)
                cnt++;
        }

        sort(data, data+n);

        if(cnt>n/2 || (data[0]>3 && data[0]==data[n/2])){
            cout<<"Bob\n";
        }

        else
            cout<<"Alice\n";
    }

    return 0;
}

