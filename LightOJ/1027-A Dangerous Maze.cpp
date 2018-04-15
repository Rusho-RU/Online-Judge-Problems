#include <bits/stdc++.h>
using namespace std;

int absolute(int n){
    if(n<0)
        return -n;
    return n;
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n, Time, negative=0, expected=0;

        scanf("%d",&n);

        for(int i=0; i<n; i++){
            scanf("%d",&Time);
            if(Time<0)
                negative++;
            expected+=absolute(Time);
        }

        int divide = n-negative;

        printf("Case %d: ",++Case);

        if(divide==0){
            puts("inf");
            continue;
        }

        int gcd = __gcd(divide, expected);
        divide/=gcd;
        expected/=gcd;

        printf("%d/%d\n",expected,divide);
    }

    return 0;
}
