#include <stdio.h>

int main(){
    int a,b,i,sum,in,l;
    for(;;){
        sum=0;
        scanf("%d%d",&a,&b);
        if(a>0 && b>0){
            if(a>b){
                l=a;
                in=b;
            }
            else{
                l=b;
                in=a;
            }

            for(i=in;i<=l;i++){
                printf("%d ",i);
                sum=sum+i;
            }
            printf("Sum=%d\n",sum);
        }
        else
            break;
    }
    return 0;
}
