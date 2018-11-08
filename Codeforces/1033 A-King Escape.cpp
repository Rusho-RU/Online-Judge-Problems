#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int qx, qy, kx, ky, dsx, dsy;

        scanf("%d%d%d%d%d%d",&qx,&qy,&kx,&ky,&dsx, &dsy);

        if(dsx<qx && dsy<qy && kx<qx && ky<qy)
            puts("YES");

        else if(dsx>qx && dsy<qy && kx>qx && ky<qy)
            puts("YES");

        else if(dsx>qx && dsy>qy && kx>qx && ky>qy)
            puts("YES");

        else if(dsx<qx && dsy>qy && kx<qx && ky>qy)
            puts("YES");

        else
            puts("NO");
    }

    return 0;
}
