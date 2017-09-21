#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    while(scanf("%d%d",&r,&c) && r || c){
        int ans;
        if(c==1 || r==1){
            ans=c*r;
        }

        else if(c==2 || r==2){
            ans=max(c,r);
            int hold=ans%4;
            if(hold==1 || hold==2) ans+=hold;
            else if(hold==3) ans++;
        }
        else{
            int h1=r/2+(r%2),h2=c/2+(c%2);
            ans=h1*h2+(r-h1)*(c-h2);
        }
        printf("%d knights may be placed on a %d row %d column board.\n",ans,r,c);
    }
    return 0;
}
