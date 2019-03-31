#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

bool check(int n){
    while(n){
        if(n%10==9)
            return false;
        n/=10;
    }

    return true;
}

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int cnt=0;

        for(int i=1; i<=n; i++)
            if(check(i))
                cnt++;

        cout<<cnt<<endl;
    }

    return 0;
}

