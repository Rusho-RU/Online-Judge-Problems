#include <stdio.h>

int main(){
    int n;
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        int a,b,f=0,s=0;
        while(n--){
            scanf("%d%d",&a,&b);
            if(a>b)
                f++;
            else if(b>a)
                s++;
        }
        printf("%d %d\n",f,s);
    }
    return 0;
}
