#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int x;

    while(cin>>x){
        if(x%4==2)
            cout<<1<<" "<<'B'<<endl;
        else{
            if(x%4==3)
                cout<<2;
            else if(x%4==0)
                cout<<1;
            else
                cout<<0;
            cout<<" "<<'A'<<endl;
        }
    }

    return 0;
}

