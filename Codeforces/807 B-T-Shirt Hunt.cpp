#include <bits/stdc++.h>
using namespace std;

int main(){
    int p,x,y;
    while(scanf("%d%d%d",&p,&x,&y)==3){
        int s=x,ans=0;
        while(s>=y){
            int i=(s/50)%475;
            for(int j=1;j<=25;j++){
                i=(i*96+42)%475;
                if(i+26==p) break;
            }
            if(i+26==p) break;
            s-=50;
        }

        if(s<y){
            s=x;
            int i;
            while(1){
                s+=50;
                i=(s/50)%475;
                for(int j=1;j<=25;j++){
                    i=(i*96+42)%475;
                    if(i+26==p) break;
                }
                if(i+26==p) break;
            }
            int dif=s-x;
            ans=dif/100+(dif%100!=0);
        }

        printf("%d\n",ans);
    }
    return 0;
}
