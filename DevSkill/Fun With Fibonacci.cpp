#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        long long l,r;
        int even=0, odd=0;
        scanf("%lld %lld",&l, &r);

        for(long long i=l; i<=r; i++)
            if((i-1)%3==0)
                even++;
            else
                odd++;

        printf("Case %d:\nOdd = %d\nEven = %d\n",++Case, odd, even);
    }

    return 0;
}
