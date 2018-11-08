#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int p1, p2, k;
        scanf("%d%d%d",&p1,&p2,&k);

        int p = p1+p2;

        int times = p/k;

        if(times&1)
            puts("COOK");
        else
            puts("CHEF");
    }

    return 0;
}
