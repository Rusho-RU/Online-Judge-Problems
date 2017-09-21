#include <stdio.h>

void main(){
    int i=1;
    for(;;i++){
        char s[10];
        scanf("%s",s);
        if(s[0]=='*')
            break;
        if(s[0]=='H')
            printf("Case %d: %s-e-Akbar\n",i,s);
        else
            printf("Case %d: Hajj-e-Asghar\n",i);
    }
    exit(0);
}
