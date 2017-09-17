#include <stdio.h>

int main(){
    char s[150];
    scanf("%s",s);
    int i,count=0;
    for(i=0;s[i]!='\0';i++)
        if(s[i]=='1')
            count++;
    printf("%s",s);
    if(count%2==0)
        printf("0\n");
    else
        printf("1\n");
    return 0;
}
