#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int x,i;
        scanf("%d",&x);
        int a[x],sum=0,count=0;
        for(i=0;i<x;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        double avr=sum/x;
        for(i=0;i<x;i++)
            if(a[i]>avr)
                count++;
        double p=(count*100.0)/x;
        printf("%.3lf%%\n",p);
    }
    return 0;
}
