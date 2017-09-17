#include <stdio.h>

int main(){
    int n[1000],i,t,j=0;
    scanf("%d",&t);
    for(i=0;i<1000;i++){
        n[i]=j;
        printf("N[%d] = %d\n",i,n[i]);
        if(j==t-1){
            j=0;
        }
        else
            j++;
    }
    return 0;
}

