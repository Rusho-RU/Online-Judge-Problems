#include <stdio.h>
#include <math.h>

int main(){
    int a,b,p;
    for(;;){
        scanf("%d",&a);
        if(a==0)
            break;
        else{
            scanf("%d %d",&b,&p);
            int c=(a*b*100)/p;
            int s=sqrt(c);
            printf("%d\n",s);
        }
    }
    return 0;
}
