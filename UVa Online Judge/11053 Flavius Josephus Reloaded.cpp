#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

long long n, a, b;

long long next(long long x){
    return (a*x%n*x%n+b)%n;
}

int main(){
    FasterIO;

    while(cin>>n && n){
        cin>>a>>b;

        long long tortoise = next(0), hare = next(next(0)), lambda=1;

        while(tortoise!=hare){
            tortoise = next(tortoise);
            hare = next(next(hare));
        }

        tortoise = next(tortoise);
        while(tortoise!=hare){
            tortoise = next(tortoise);
            lambda++;
        }

        cout<<n-lambda<<endl;
    }

    return 0;
}

