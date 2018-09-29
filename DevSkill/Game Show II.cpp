#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int data[4];

        for(int i=0; i<4; i++)
            scanf("%d",&data[i]);

        int n;
        scanf("%d",&n);

        long long haveTo = 0;

        for(int i=0; i<4; i++)
            haveTo+=min(data[i], n-1);
        haveTo++;

        printf("%lld\n",haveTo);
    }

    return 0;
}
