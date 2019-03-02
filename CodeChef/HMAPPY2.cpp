#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

long long lcm(long long a, long long b){
    return (a*b)/__gcd(a, b);
}

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        long long n, a, b, k;

        cin>>n>>a>>b>>k;

        long long solvable = (n/a) + (n/b) - 2*(n/lcm(a, b));

        if(solvable>=k)
            cout<<"Win\n";
        else
            cout<<"Lose\n";
    }

    return 0;
}

