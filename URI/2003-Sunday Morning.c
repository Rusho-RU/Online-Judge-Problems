#include <stdio.h>

int main(){
    int h,m,hold;
    while((scanf("%d:%d",&h,&m))!=EOF){
        if(h<7)
            printf("Atraso maximo: 0\n");
        else{
            hold=(h*60)+m+60-480;
            printf("Atraso maximo: %d\n",hold);
        }
    }
    return 0;
}
