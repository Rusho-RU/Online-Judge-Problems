#include <stdio.h>

int main(){
    int a[1000],i,low,n,hold=0;
    scanf("%d",&n);
    scanf("%d",&a[0]);
    low=a[0];
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<low){
            low=a[i];
            hold=i;
        }
    }
    printf("Menor valor: %d\n",a[hold]);
    printf("Posicao: %d\n",hold);
    return 0;
}
