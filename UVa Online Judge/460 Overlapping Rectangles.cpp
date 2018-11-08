#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;

    scanf("%d",&t);

    while(t--){
        int x1, x2, x3, x4, y1, y2, y3, y4;

        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d %d %d %d",&x3,&y3,&x4,&y4);

        int a = max(x1, x3);
        int b = max(y1, y3);
        int c = min(x2, x4);
        int d = min(y2, y4);

        if(a>=c || b>=d)
            puts("No Overlap");
        else
            printf("%d %d %d %d\n",a,b,c,d);

        if(t)
            puts("");
    }

    return 0;
}
