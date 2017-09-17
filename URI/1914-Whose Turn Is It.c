#include <stdio.h>
#include <string.h>

void main(){
    unsigned int qt,n,m,i;
    char s[4][101];
    scanf("%d",&qt);
    for(i=0;i<qt;i++){
        scanf("%s %s %s %s",s[0],s[1],s[2],s[3]);
        scanf("%u %u",&n,&m);
        unsigned int sum=n+m;
        if(sum%2==0)
            if(strcmp(s[1],"PAR")==0)
                printf("%s\n",s[0]);
            else
                printf("%s\n",s[2]);
        else
            if(strcmp(s[1],"IMPAR")==0)
                printf("%s\n",s[0]);
            else
                printf("%s\n",s[2]);
    }
    exit(0);
}
