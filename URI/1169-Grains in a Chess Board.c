#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int a;
        scanf("%d",&a);
        unsigned long long int x=pow(2,a)/12000;
        printf("%llu kg\n",x);
    }
    return 0;
}
