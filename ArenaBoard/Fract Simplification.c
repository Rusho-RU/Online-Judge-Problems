#include <stdio.h>

int __gcd(int a, int b){
    if(b==0)
        return a;
    return __gcd(b, a%b);
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int a, b;
        scanf("%d %d",&a,&b);

        int gcd = __gcd(a, b);

        a/=gcd;
        b/=gcd;

        printf("%d/%d\n",a,b);
    }

    return 0;
}
