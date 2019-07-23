#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int check(int n){
    int sum=0;

    while(n){
        sum+=n%10;
        n/=10;
    }

    return sum;
}

int main(){
    FasterIO;

    int a;

    while(cin>>a){
        while(check(a)%4){
            a++;
        }

        cout<<a<<endl;
    }

    return 0;
}

