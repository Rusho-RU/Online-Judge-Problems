#include <stdio.h>

int main(){
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if((a>b && a<c) || (a>c && a<b))
            printf("Case %d: %d\n",i,a);
        else if((b>a && b<c) || (b>c && b<a))
            printf("Case %d: %d\n",i,b);
        else if((c>a && c<b) || (c>b && c<a))
            printf("Case %d: %d\n",i,c);
    }
    return 0;
}
