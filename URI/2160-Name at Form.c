#include <stdio.h>

void main(){
    char l[500];
    int i;
    for(i=0;;i++){
        scanf("%c",&l[i]);
        if(l[i]=='\n')
            break;
    }
    if(i>80)
        printf("NO\n");
    else
        printf("YES\n");
}
