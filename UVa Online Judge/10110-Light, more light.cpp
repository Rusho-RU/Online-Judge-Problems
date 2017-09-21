#include <bits/stdc++.h>
using namespace std;

bool check(long long n){
    long long hold=(long long)floor(sqrt(n));
    if(hold*hold==n || (hold+1)*(hold+1)==n) return false;
    else return true;
}

int main(){
    long long n;
    while(scanf("%lld",&n),n){
        if(check(n)) printf("no\n");
        else printf("yes\n");
    }
    return 0;
}
