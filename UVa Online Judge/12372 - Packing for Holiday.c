#include <stdio.h>

void main(){
    int n,i;
    scanf("%d",&n);;
    for(i=0;i<n;i++){
        int l,w,h;
        scanf("%d %d %d",&l,&w,&h);
        if(l>20 || w>20 || h>20)
            printf("Case %d: bad\n",i+1);
        else
            printf("Case %d: good\n",i+1);
    }
    exit(0);
}
