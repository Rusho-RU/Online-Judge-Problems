#include <stdio.h>

int main(){
    int a,b,in,j,l;
    scanf("%d%d",&a,&b);
    if(a>b){
        l=a;
        in=b+1;
    }
    else{
        l=b;
        in=a+1;
    }
    for(j=in;j<l;j++)
        if(j%5==2 || j%5==3)
            printf("%d\n",j);
    return 0;
}

