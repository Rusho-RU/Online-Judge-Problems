#include <stdio.h>

int main(){
    int n[15],par[5],impar[5],i,x=0,y=0,j;
    for(i=0;i<15;i++)
        scanf("%d",&n[i]);
    for(i=0;i<15;i++){
        if(n[i]%2==0){
            par[x]=n[i];
            x++;
        }
        else{
            impar[y]=n[i];
            y++;
        }
        if(x==5){
            for(j=0;j<5;j++)
                printf("par[%d] = %d\n",j,par[j]);
            x=0;
        }
        if(y==5){
            for(j=0;j<5;j++)
                printf("impar[%d] = %d\n",j,impar[j]);
            y=0;
        }
    }
    for(j=0;j<y;j++)
            printf("impar[%d] = %d\n",j,impar[j]);
    for(j=0;j<x;j++)
        printf("par[%d] = %d\n",j,par[j]);
    return 0;
}
