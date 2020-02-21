#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int data[18];
    data[0] = 8, data[1] = 3;

    for(int i=2; i<18; i++)
        data[i] = (data[i-1]+data[i-2])%10;

    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        if(n==1){
            cout<<1<<endl;
            continue;
        }

        int p = log2(n);

        long long id = 1;

        for(int i=1; i<=p; i++)
            id*=2;

        if(id==2){
            cout<<1<<endl;
            continue;
        }

        if(id==4){
            cout<<3<<endl;
            continue;
        }

        id-=6;

        id%=18;

        cout<<data[id]<<endl;
    }

    return 0;
}

