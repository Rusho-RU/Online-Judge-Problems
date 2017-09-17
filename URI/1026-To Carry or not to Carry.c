#include <stdio.h>

int main(){
    long int n,m;
    int a[32],i,j;
    a[31]=1;
    for(j=30;j>-1;j--){
        a[j]=2*a[j+1];
    }
    while(scanf("%ld %ld",&n,&m)!=EOF){
        int a1[32],a2[32],rem1=0,rem2=0;
        for(i=0;i<32;i++){
            if(n<a[i])
                rem1=a[i];
            if(m<a[i])
                rem2=a[i];
            if(rem1!=0 && rem2!=0)
                break;
        }
        printf("%d  %d\n",rem1,rem2);
    }
}

int power(int a, int b){
    int i,p=1;
    for(i=0;i<b;i++)
        p=p*a;
    return p;
}
