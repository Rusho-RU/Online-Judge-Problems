#include <stdio.h>

void main(){
    int n,i;
    scanf("%d",&n);
    char s[n][101];
    for(i=0;i<n;i++){
        scanf(" %[^\n]c",s[i]);
    }
    printf("Ciencia da Computacao\n");
}
