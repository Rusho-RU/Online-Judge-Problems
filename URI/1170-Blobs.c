#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        double x;
        long long int i;
        scanf("%lf",&x);
        for(i=0;x>1;i++){
            x=x/2.0;
        }
        printf("%lld dias\n",i);
    }
    return 0;
}
