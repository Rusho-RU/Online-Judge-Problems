#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int a,b,temp;
        scanf("%d%d",&a,&b);
        if(a<b){
            temp=a;
            a=b;
            b=temp;
        }
        while(a%b!=0){
            temp=a;
            a=b;
            b=temp%b;
        }
        printf("%d\n",b);
    }
    return 0;
}
