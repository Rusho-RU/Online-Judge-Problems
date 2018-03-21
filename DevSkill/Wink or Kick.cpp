#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        long long a,b;
        scanf("%lld%lld",&a,&b);

        if(!b || a%b)
            puts(":kick:");
        else
            puts(":wink:");
    }

    return 0;
}
