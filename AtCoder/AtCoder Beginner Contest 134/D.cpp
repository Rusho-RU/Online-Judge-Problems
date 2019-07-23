#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n+1];
        vector<int>temp(n+1, 0);

        for(int i=1; i<=n; i++)
            cin>>data[i];

        for(int i=n; i>0; i--)
            for(int j=i; j<=n; j+=i)
                temp[i]^=data[j];
    }

    return 0;
}

