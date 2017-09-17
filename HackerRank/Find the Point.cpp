#include <bits/stdc++.h>
using namespace std;

int main(){
    int px,py,qx,qy,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d%d",&px,&py,&qx,&qy);
        int rx=2*qx-px,ry=2*qy-py;
        printf("%d %d\n",rx,ry);
    }
    return 0;
}
