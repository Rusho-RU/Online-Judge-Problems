#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int day,n,m,count=0;
        scanf("%d %d",&day,&n);
        bool fixed[3651]={};
        for(int i=6;i<=day;i+=7) fixed[i]=fixed[i+1]=true;
        while(n--){
            scanf("%d",&m);
            for(int ans=0;;){
                ans+=m;
                if(ans>day) break;
                if(!fixed[ans]){
                    fixed[ans]=true,count++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
