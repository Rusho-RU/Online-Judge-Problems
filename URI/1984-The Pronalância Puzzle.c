#include <stdio.h>
#include <string.h>

int main(){
    char s[15];
    scanf("%s",s);
    int l=strlen(s),i;
    for(i=l-1;i>-1;i--)
        printf("%c",s[i]);
    printf("\n");
    return 0;
}
