#include <stdio.h>

int main(){
    int a,b,c,h;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        h=a;
    else{
        if(b>c)
            h=b;
        else
            h=c;
    }
    printf("%d eh o maior\n",h);
    return 0;
}
