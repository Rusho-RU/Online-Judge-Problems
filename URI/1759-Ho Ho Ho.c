#include <stdio.h>

int main(){
    char s[3]="Ho";
    unsigned int n,i;
    scanf("%u",&n);
    for(i=0;i<n;i++){
        if(i==0)
            printf("%s",s);
        else
            printf(" %s",s);
    }
    printf("!\n");
    return 0;
}
