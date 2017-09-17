#include <stdio.h>

int main(){
    int a,b,in,j,l,sum=0;
    scanf("%d%d",&a,&b);
    if(a>b){
        l=a;
        in=b;
    }
    else{
        l=b;
        in=a;
    }
    for(j=in;j<=l;j++)
        if(j%13!=0)
            sum=sum+j;
    printf("%d\n",sum);
    return 0;
}
