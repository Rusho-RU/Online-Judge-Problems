#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int x[5], y[5];
        pair<int, int>

        for(int i=0; i<5; i++){
            scanf("%d%d",&x[i], &y[i]);
        }

        sort(x, x+5);
        sort(y, y+5);

        bool trueX = false, trueY = false, ok = false;

        for(int i=2; i<5; i++){
            if(x[i]==x[i-1] && x[i]==x[i-2])
                trueX = true;
        }

        for(int i=2; i<5; i++){
            if(y[i]==y[i-1] && y[i]==y[i-2])
                trueY = true;
        }

        for(int i=0; i<n; i++){

        }

        if(trueX && trueY)
            puts("Yes");
        else
            puts("No");
    }

    return 0;
}
