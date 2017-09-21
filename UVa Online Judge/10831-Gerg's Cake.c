#include <stdio.h>

int PerfectSqrOrNot(long long int n);

void main(void){
    long long unsigned int a,p;
    int square1[]={};
    for(;;){
        scanf("%llu %llu",&a,&p);
        long long int cake,i;
        if(a==-1 && p==-1)
            exit(0);
        else{
            for(i=1;;i++){
                cake=a+p*i;
                if(cake>25000){
                    printf("No\n");
                    break;
                }
                if(PerfectSqrOrNot(cake)){
                    printf("Yes\n");
                    break;
                }
            }
        }
    }
}

int PerfectSqrOrNot(long long int n){
    int j,k=0,count=0,ara[1000];
    long long int a=n,i=2;
    if(n==1)
        return 1;
    else{
        for(;i<=a;i++){
            if(a%i==0){
                ara[k]=i;
                k++;
                a=a/i;
                i=1;
            }
        }

        for(i=0;i<k;i+=2){
            if(ara[i]!=ara[i+1]){
                return 0;
                break;
            }
        }
        if(i==k)
            return 1;
    }
}

