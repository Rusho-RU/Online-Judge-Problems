#include <stdio.h>

void main(){
    int p,j1,j2,r,a;
    scanf("%d%d%d%d%d",&p,&j1,&j2,&r,&a);
    if(r==1 && a==0)
        printf("Jogador 1 ganha!\n");
    else if(r==1 && a==1)
        printf("Jogador 2 ganha!\n");
    else{
        int sum=j1+j2;
        if((sum%2==0 && p==1) || (sum%2!=0 && p==0))
            printf("Jogador 1 ganha!\n");
        else
            printf("Jogador 2 ganha!\n");
    }
}
