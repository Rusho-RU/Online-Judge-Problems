#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void){
    char pointer_ara[101][101],length[101],ara2[101][101];
    int i=0,j,hold=0,n,k;
    while(gets(pointer_ara[i])){
        length[i]=strlen(pointer_ara[i]);
        if(length[i]==0)
            break;
        if(length[i]>hold)
            hold=length[i];
        for(j=length[i];j<102;j++)
            pointer_ara[i][j]=' ';
        i++;
    }
    n=i;

    for(j=0;j<hold;j++){
        for(i=n-1;i>-1;i--)
            printf("%c",pointer_ara[i][j]);
        printf("\n");
    }
    exit(0);
}
