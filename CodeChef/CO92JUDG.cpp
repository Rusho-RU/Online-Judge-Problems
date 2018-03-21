#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n,v;
        int sumAlice = 0, sumBob = 0, maxAlice = -1, maxBob = -1;

        scanf("%d",&n);

        for(int i=0; i<n; i++){
            scanf("%d",&v);
            sumAlice+=v;
            maxAlice = max(maxAlice, v);
        }

        sumAlice-=maxAlice;

        for(int i=0; i<n; i++){
            scanf("%d",&v);
            sumBob+=v;
            maxBob = max(maxBob, v);
        }
        sumBob-=maxBob;

        if(sumAlice < sumBob)
            puts("Alice");
        else if(sumAlice > sumBob)
            puts("Bob");
        else
            puts("Draw");
    }

    return 0;
}
