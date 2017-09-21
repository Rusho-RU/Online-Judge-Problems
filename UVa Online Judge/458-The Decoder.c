#include <stdio.h>
void main(){
    int i,n;
    char s[10000];
    for(;;){
        if(scanf("%s",s)==EOF)
            exit(0);
        else{
            for(i=0;s[i]!='\0';i++){
                n=s[i];
                n=n-7;
                s[i]=n;
                printf("%c",s[i]);
            }
        }
        printf("\n");
    }
}
