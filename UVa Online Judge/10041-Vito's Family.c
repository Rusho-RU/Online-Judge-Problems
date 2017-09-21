#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        int m;
        scanf("%d",&m);
        int a[m];
        int j;
        for(j=0;j<m;j++){
            scanf("%d",&a[j]);
        }
        int k,sum,min;
        for(j=0;j<1;j++){
            for(k=0,sum=0;k<m;k++){
                sum=sum+abs(a[j]-a[k]);
            }
            min=sum;
        }

        for(j=1;j<m;j++){
            for(k=0,sum=0;k<m;k++){
                sum=sum+abs(a[j]-a[k]);
            }
            if(sum<min)
                min=sum;
        }

        printf("%d\n",min);
    }
    return 0;
}
