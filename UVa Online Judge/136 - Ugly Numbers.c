#include <stdio.h>

int main(){
    int count=0;
    long int n=1;
    for(;count!=1500;){
        long int a=n;
        for(;a!=1;){
            if(a%2==0)
                a=a/2;

            else if(a%3==0)
                a=a/3;

            else if(a%5==0)
                a=a/5;

            else
                break;
        }
        if(a==1){
            count++;
            printf("%d  %d\n",count,n);
        }
        n++;
    }
    printf("%d\n",n-1);
    return 0;
}
