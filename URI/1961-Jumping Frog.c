#include <stdio.h>

int main(){
    int p,n,a[100],d;
    scanf("%d%d",&p,&n);
    int flag=1,i;
    scanf("%d",&a[0]);
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>a[i-1])
            d=a[i]-a[i-1];
        else
            d=a[i-1]-a[i];
        if(d>p)
            flag=0;
    }
    if(flag==1)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");
}
