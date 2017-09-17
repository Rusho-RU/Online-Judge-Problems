#include <stdio.h>
#include <string.h>

void main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        char s[10000];
        scanf("%s",s);
        int l=strlen(s);
        printf("%.2lf\n",l/100.0);
    }
}
