#include <stdio.h>
#include <string.h>

int main(){
    int n,m,i;
    char s[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %d",s,&m);
        if((strcmp(s,"Thor"))==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
