#include <stdio.h>


int main(){
    int n,i,count,sum;
    for(;;){
        sum=0;
        count=0;
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=n;;i++){
            if(i%2==0){
                sum=sum+i;
                count++;
            }
            if(count==5)
                break;
        }
        printf("%d\n",sum);
    }
}
