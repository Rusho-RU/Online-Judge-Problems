#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n],i;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        int d=abs(a[0]-m),rem=0;
        for(i=1;i<n;i++){
            if(abs(a[i]-m)<d){
                rem=i,d=abs(a[i]-m);
                if(a[i]-m==0)
                    break;
            }
        }
        printf("%d\n",rem+1);
    }
    return 0;
}
