#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    while(scanf("%d%d%d",&n,&m,&k)==3){
        map<int,bool>hole;
        int d;
        for(int i=0;i<m;i++){
            scanf("%d",&d);
            hole[d]=true;
        }

        int a,b,pos=1;
        bool fall=false;
        if(hole[1]) fall=true;
        for(int i=0;i<k;i++){
            scanf("%d %d",&a,&b);
            if(!fall){
                if(pos==a)
                    pos=b;
                else if(pos==b)
                    pos=a;
                if(hole[pos]) fall=true;
            }
        }
        printf("%d\n",pos);
    }
    return 0;
}
