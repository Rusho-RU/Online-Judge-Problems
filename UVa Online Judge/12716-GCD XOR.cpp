#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;

    while(scanf("%d %d",&n,&m)==2){
        int ans = n^m;

        cout<<ans<<endl;
        ans = __gcd(n,m);
        cout<<ans<<endl;
    }
}
