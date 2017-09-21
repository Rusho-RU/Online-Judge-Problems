#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void){
    char pointer_ara[13][25];
    char **pointer=pointer_ara;

    for(;;){
        int row,count,total=0,hold=0,i,j;
        scanf("%d",&row);
        if(row==0)
            exit(0);
        else if(row>0 && row<13){
            for(i=0;i<row;i++){
                scanf(" %[^\n]c",pointer_ara[i]);
                count=0;
                for(j=0;j<25;j++)
                    if(*(pointer_ara[i]+j)=='X'){
                        count++;
                        total++;
                    }
                if(count>hold)
                    hold=count;
            }
        }

        printf("%d\n",hold*row-total);
    }
}
