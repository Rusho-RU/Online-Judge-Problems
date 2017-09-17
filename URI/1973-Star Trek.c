#include <stdio.h>

void main(){
    long int n,i,sum=0,count=0;
    scanf("%ld",&n);
    long int p[n],a[n];
    for(i=0;i<n;i++){
        scanf("%ld",&p[i]);
        a[i]=p[i];
    }

    for(i=0;;){
        if(a[i]%2==0){
            a[i]--;
            i--;
        }

        else{
            a[i]--;
            i++;
        }

        if(i<0 || i==n)
            break;
    }

    for(i=0;i<n;i++){
        if(a[i]!=p[i])
            count++;
        if(a[i]>0)
            sum=sum+a[i];
    }

    printf("%ld% ld\n",count,sum);
}
