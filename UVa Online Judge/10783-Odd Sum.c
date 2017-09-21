#include <stdio.h>

int main(){
    int n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        int a,b;
        scanf("%d %d",&a,&b);
        int i,sum=0;
        for(i=a;i<=b;i++){
            if(i%2!=0)
                sum+=i;
        }
        printf("Case %d: %d\n",j+1,sum);
    }
    return 0;
}
