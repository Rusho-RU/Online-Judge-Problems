#include <stdio.h>

void main(){
    char l[500];
    int i;
    for(i=0;;i++){
        scanf("%c",&l[i]);
        if(l[i]=='\n')
            break;
    }
    if(i>140)
        printf("MUTE\n");
    else
        printf("TWEET\n");
    exit(0);
}

