#include <stdio.h>

void main(){
    int n,ara[20],i,max=21,hold;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
        if(ara[i]<max){
            hold=i;
            max=ara[hold];
        }
    }
    printf("%d\n",hold+1);
    exit(0);
}
