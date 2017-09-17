#include <stdio.h>

int main(){
    int n,i;
    unsigned long long int m;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%llu",&m);
        if(m<2015)
            printf("%llu D.C.\n",2015-m);
        else
            printf("%llu A.C.\n",m-2014);
    }
    return 0;
}
