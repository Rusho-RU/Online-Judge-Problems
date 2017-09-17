#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,sum=1,mul=1;
        scanf("%d",&n);
        for(i=1;i<n;i++){
            mul*=2;
            sum=sum+mul;
        }
        printf("%d\n",sum);
    }
    return 0;;
}
