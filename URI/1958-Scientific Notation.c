#include <stdio.h>
#include <string.h>

void main(){
    long double x;
    char s[200];
    int i;
    scanf("%LE",&x);
    sprintf(s,"%.4LE",x);
    if(s[0]!='-')
        printf("+");
    int len=strlen(s)-1;
    if(s[len-2]=='0'){
        s[len-2]=s[len-1];
        s[len-1]=s[len];
        s[len]='\0';
    }
    for(i=0;s[i]!='E';i++);
    if(s[i-1]=='9'){
        s[i-1]='0';
        s[i-2]=s[i-2]+1;
    }
    printf("%s\n",s);
}
