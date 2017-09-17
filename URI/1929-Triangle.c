#include <stdio.h>

int main(){
    int a[4],i,hold=0,j,s1,s2;
    for(i=0;i<4;i++)
        scanf("%d",&a[i]);
    for(i=0;i<3;i++){
        for(j=i+1;j<4;j++)
            if(a[j]<a[i]){
                hold=a[i];
                a[i]=a[j];
                a[j]=hold;
            }
    }
    s1=a[0]+a[1];
    s2=a[1]+a[2];
    if((s1>a[2])||(s2>a[3]))
        printf("S\n");
    else
        printf("N\n");
    return 0;
}
