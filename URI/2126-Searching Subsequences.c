#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char p1[100],p2[100];
    int m=1;
    while((scanf("%s %s",p1,p2))!=EOF){
        int i,l1=strlen(p1),pos,c,j,count=0,l2=strlen(p2),limit=l2-l1+1;
        for(i=0;i<limit;i++){
            if(p2[i]==p1[0]){
                c=i+1;
                for(j=1;p1[j]!='\0';c++,j++){
                    if(p1[j]!=p2[c])
                        break;
                }

                if(j==l1){
                    pos=i+1;
                    count++;
                    i=i+l1-1;
                }
            }
        }
        if(count==0)
            printf("Caso #%d:\nNao existe subsequencia\n",m);
        else
            printf("Caso #%d:\nQtd.Subsequencias: %d\nPos: %d\n",m,count,pos);
        printf("\n");
        m++;
    }
}
