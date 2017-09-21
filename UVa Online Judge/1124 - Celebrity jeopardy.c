#include <stdio.h>

void main(){
    char s[100];
    while(gets(s)!=NULL){
        printf("%s\n",s);
    }
    exit(0);
}
