#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int angle;
        scanf("%d",&angle);

        if(360%(180-angle))
            puts("NO");
        else
            puts("YES");
    }

    return 0;
}
