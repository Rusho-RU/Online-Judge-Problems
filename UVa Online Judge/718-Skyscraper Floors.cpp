#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n<0) return -n;
    return n;
}

int main(){
    int floor,elev,a,b,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d%d",&floor,&elev,&a,&b);
        int x[elev],y[elev],h;
        bool possible=false;

        for(int i=0;i<elev;i++)
            scanf("%d %d",&x[i],&y[i]);

        for(int i=0;i<elev && !possible;i++){
            for(int j=0;j<elev && !possible;j++){
                if(f(a-y[i])%x[i]==0 && f(b-y[j])%x[j]==0){
                    if(f(y[i]-y[j])%__gcd(x[i],x[j])==0)
                        possible=true;
                }
                if(possible) printf("%d %d %d %d\n",x[i],y[i],x[j],y[j]);
            }
        }
        if(possible) puts("It is possible to move the furniture.");
        else puts("The furniture cannot be moved.");
    }
    return 0;
}
