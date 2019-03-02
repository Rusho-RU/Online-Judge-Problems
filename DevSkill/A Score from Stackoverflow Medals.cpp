#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int b,s,g;

        scanf("%d%d%d",&b,&s,&g);

        printf("%d\n", (b*10) + (s*50) + (g*100));
    }

    return 0;
}
