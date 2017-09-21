#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int a;
        scanf("%d",&a);
        int i,ara[a],max=0,n[a];
        for(i=0;i<a;i++){
            scanf("%d",&ara[i]);
            if(ara[i]>max)
                max=ara[i];
        }
        int temp[max+1];
        for(i=0;i<=max;i++)
            temp[i]=0;
        for(i=0;i<a;i++)
            temp[ara[i]]++;
        for(i=0;i<max;i++)
            temp[i+1]+=temp[i];
        for(i=a-1;i>-1;i--){
            n[temp[ara[i]]-1]=ara[i];
            temp[ara[i]]--;
        }
        int sum1=n[0],sum2=n[a-1],j;
        for(j=1,i=0;i<a-j-1;){
            if(sum1>sum2){
                j++;
                sum2+=n[a-j];
            }
            else{
                i++;
                sum1+=n[i];
            }
            printf("%d   %d\n",sum1,sum2);
        }
        printf("%d\n",abs(sum1-sum2));
    }
}
