#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    int a[n],i,c2=0,c3=0,c5=0,c4=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            c2++;
        if(a[i]%3==0)
            c3++;
        if(a[i]%4==0)
            c4++;
        if(a[i]%5==0)
            c5++;
    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",c2,c3,c4,c5);
}
