#include <stdio.h>

int main(){
    int n,a[10000],i;
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
        if(a[i]==0)
            printf("NULL\n");
        else{
            if(a[i]>0){
                if(a[i]%2==0)
                    printf("EVEN ");
                else
                    printf("ODD ");
                printf("POSITIVE\n");
            }

            else{
                if(a[i]%2==0)
                    printf("EVEN ");
                else
                    printf("ODD ");
                printf("NEGATIVE\n");
            }
        }
    }
    return 0;
}
