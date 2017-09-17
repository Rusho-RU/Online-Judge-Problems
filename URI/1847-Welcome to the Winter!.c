#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x=b-a,y=c-b;
    if(a==b){
        if(c<a)
            printf(":(\n");
        else
            printf(":)\n");
    }
    else if(y>x)
        printf(":)\n");

    else if(x>y)
        printf(":(\n");

    return 0;
}
