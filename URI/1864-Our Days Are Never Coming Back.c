#include <stdio.h>

void main(){
    int n,i;
    char s[35]={'L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("%c",s[i]);
    printf("\n");
    exit(0);
}
