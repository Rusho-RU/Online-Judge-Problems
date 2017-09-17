#include <stdio.h>

int main(){
    int x,z;
    scanf("%d",&x);
    for(;;){
        scanf("%d",&z);
        if(z>x)
            break;
    }
    int sum=x,count=1;
    for(;;){
        x++;
        count++;
        sum=sum+x;
        if(sum>z)
            break;
    }
    printf("%d\n",count);
}
