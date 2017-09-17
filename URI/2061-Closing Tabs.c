#include <stdio.h>
#include <string.h>

int main(){
    int x,y,i;
    scanf("%d %d",&x,&y);
    for(i=0;i<y;i++){
        char s[10];
        scanf("%s",s);
        if((strcmp(s,"fechou"))==0)
            x++;
        else
            x--;
    }
    printf("%d\n",x);
}
