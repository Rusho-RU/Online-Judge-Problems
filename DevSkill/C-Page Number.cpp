#include <bits/stdc++.h>
using namespace std;

int main(){
    long long pow2[65];
    pow2[0]=1;

    for(int i=1; i<65; i++)
        pow2[i] = pow2[i-1]*2;

    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        long long n,s;
        scanf("%lld %lld",&s,&n);

        long long hold = ceil((double)n/s);

        int i;

        for(i=0; i<65; i++)
            if(hold<=pow2[i]-1)
                break;

        printf("Case %d: %d\n",++Case,i);
    }

    return 0;
}
