#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int r1, r2, x1, x2, y1, y2;
        scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2);
        int x = x1-x2, y = y1-y2;
        int dist = x*x + y*y;

        if(dist && dist <= r1*r1 + r2*r2)
            puts("Rich");
        else
            puts("Dead");
    }

    return 0;
}
