#include <stdio.h>

int main(){
    int n2,n1,i,sum=0;
    scanf("%d%d",&n2,&n1);
    for(i=n1+1;i<n2;i++)
        if(i%2!=0)
            sum=sum+i;
    printf("%d\n",sum);
    return 0;
}

