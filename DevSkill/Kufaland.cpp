#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        long long n;
        scanf("%lld",&n);

        if(n%3==0)
            puts("1");
        else if(n%3==1)
            puts("2");
        else
            puts("4");
    }

    return 0;
}
