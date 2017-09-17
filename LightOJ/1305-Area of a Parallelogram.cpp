#include <bits/stdc++.h>
using namespace std;

int absolute(int n){
    if(n<0) return -n;
    return n;
}

int main(){
    int t,Case=0;
    scanf("%d",&t);

    while(t--){
        int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
        scanf("%d%d%d%d%d%d",&Ax,&Ay,&Bx,&By,&Cx,&Cy);
        Dx=Ax-Bx+Cx, Dy=Ay-By+Cy;

        int area=absolute((Ax*By+Bx*Cy+Cx*Dy+Dx*Ay-Ay*Bx-By*Cx-Cy*Dx-Dy*Ax)/2);

        printf("Case %d: %d %d %d\n",++Case,Dx,Dy,area);
    }

    return 0;
}
