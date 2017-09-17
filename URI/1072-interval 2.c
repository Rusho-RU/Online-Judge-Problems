#include <stdio.h>

int main(){
    int n,i=0,o=0,j;
    int a[10000];
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d",&a[j]);
        if(a[j]<10 || a[j]>20)
            ++o;
        else
            ++i;
    }
    printf("%d in\n%d out\n",i,o);
    return 0;
}
