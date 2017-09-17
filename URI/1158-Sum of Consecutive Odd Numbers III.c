#include <stdio.h>

int main(){
    int n,i,count,k,x,y,sum;
    scanf("%d",&n);
    for(k=0;k<n;k++){
        sum=0;
        count=0;
        scanf("%d%d",&x,&y);
        for(i=x;;i++){
            if(i%2!=0){
                sum=sum+i;
                count++;
            }
            if(count==y)
                break;
        }
        printf("%d\n",sum);
    }
    return 0;
}
