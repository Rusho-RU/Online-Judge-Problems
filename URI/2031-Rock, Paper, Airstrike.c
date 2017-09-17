#include <stdio.h>
#include <string.h>

void main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        char a[10],b[10];
        scanf("%s %s",a,b);
        if((strcmp(a,"ataque"))==0 && (strcmp(b,"ataque"))==0)
            printf("Aniquilacao mutua\n");
        else if((strcmp(b,"ataque"))==0)
            printf("Jogador 2 venceu\n");
        else if((strcmp(a,"ataque"))==0)
            printf("Jogador 1 venceu\n");
        else if((strcmp(a,"papel"))==0 && (strcmp(b,"papel"))==0)
            printf("Ambos venceram\n");
        else if((strcmp(a,"pedra"))==0 && (strcmp(b,"pedra"))==0)
            printf("Sem ganhador\n");
        else
            if((strcmp(a,"pedra"))==0)
                printf("Jogador 1 venceu\n");
            else if((strcmp(b,"pedra"))==0)
                printf("Jogador 2 venceu\n");
    }
}
