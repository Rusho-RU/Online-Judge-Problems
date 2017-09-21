#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int a;
        scanf("%d",&a);
        int ara[a];
        int i,temp,sum=0,j;
        for(i=0;i<a;i++)
            scanf("%d",&ara[i]);
        for(i=0;i<a;i++){
            for(j=i+1;j<a;j++){
                if(ara[j]<ara[i]){
                    temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;
                }
            }
            if(i!=0)
                sum+=ara[i]-ara[i-1];
        }
        sum+=ara[a-1]-ara[0];
        printf("%d\n",sum);
    }
    return 0;
}
