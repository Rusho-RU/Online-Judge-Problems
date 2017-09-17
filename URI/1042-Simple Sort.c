#include <stdio.h>

int main(){
    int a[3],b[3],i,j,h;
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<2;i++)
        for(j=i+1;j<3;j++)
            if(a[j]<a[i]){
                h=a[i];
                a[i]=a[j];
                a[j]=h;
            }
    for(i=0;i<3;i++)
        printf("%d\n",a[i]);
    printf("\n");
    for(i=0;i<3;i++)
        printf("%d\n",b[i]);
}
