#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int st=0,bt=0,at=0,s=0,b=0,a=0,xt,yt,zt,x,y,z;
    while(n--){
        char c[50];
        scanf("%s%d%d%d",c,&xt,&yt,&zt);
        st+=xt,bt+=yt,at+=zt;
        scanf("%d%d%d",&x,&y,&z);
        s+=x,b+=y,a+=z;
    }
    printf("Pontos de Saque: %.2lf %%.\n",(double)s*100/st);
    printf("Pontos de Bloqueio: %.2lf %%.\n",(double)b*100/bt);
    printf("Pontos de Ataque: %.2lf %%.\n",(double)a*100/at);
    return 0;
}
