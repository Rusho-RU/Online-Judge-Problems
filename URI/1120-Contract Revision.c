#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
    for(;;){
        char s[150],a[150],c;
        char *p;
        int i,j,x;
        unsigned long long int n;
        scanf("%d %s",&x,s);
        c='0'+x;
        if(c=='0' && s[0]=='0')
            break;
        for(i=0,j=0;s[i]!='\0';i++){
            if(s[i]!=c){
                a[j]=s[i];
                j++;
            }
        }
        a[j]='\0';
        for(i=0;a[i]=='0';i++);
        if(a[i]=='\0')
            printf("0");
        else
            for(;a[i]!='\0';i++)
                printf("%c",a[i]);
        printf("\n");
    }
    return 0;
}
