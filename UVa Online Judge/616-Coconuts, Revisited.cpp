#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)){
        if(n<0) break;
        int i,j,hold,ans=0,limit=sqrt(n-1)+1;
        printf("%d coconuts, ",n);
        for(i=8;i>1;i--){
            hold=n;
            for(j=0;j<i;j++){
                hold--;
                if(hold%i!=0) break;
                hold-=hold/i;
            }
            if(j==i && hold%i==0){
                ans=i;
                break;
            }
        }
        if(!ans || i==1) printf("no solution\n");

        else printf("%d people and 1 monkey\n",i);
    }
    return 0;
}
