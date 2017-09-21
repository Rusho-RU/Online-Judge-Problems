#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,m;
    while(scanf("%d%d",&s,&m)==2){
        int seed=0,i;
        for(i=1;;i++){
            seed=(seed+s)%m;
            if(!seed)
                break;
        }
        printf("%10d%10d",s,m);
        if(i==m)
            printf("    Good Choice\n\n");
        else
            printf("    Bad Choice\n\n");
    }
    return 0;
}
