#include <stdio.h>

int main(){
    int n,a,b,i,sum,in,l,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum=0;
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
            if(j%2!=0)
                sum=sum+j;
        printf("%d\n",sum);
    }
    return 0;
}
