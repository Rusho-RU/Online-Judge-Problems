#include <stdio.h>

int main(){
    int a,n,i;
    scanf("%d",&a);
    for(;;){
        scanf("%d",&n);
        if(n>0)
            break;
    }
    int sum=a;
    for(i=1;i<n;i++){
        a++;
        sum=sum+a;
    }
    printf("%d\n",sum);
    return 0;
}
