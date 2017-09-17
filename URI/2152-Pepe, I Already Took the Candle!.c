#include <stdio.h>

void main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int h,m,o;
        scanf("%d%d%d",&h,&m,&o);
        printf("%02d:%02d - A porta ",h,m);
        if(o==0)
            printf("fechou!\n");
        else
            printf("abriu!\n");
    }
}
