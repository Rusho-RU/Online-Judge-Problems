#include <bits/stdc++.h>
using namespace std;

#define MAX 1000001
bool prime[MAX];

void SimpleSieve(){
    long long i,j,k;
    prime[1]=true;
    for(i=4;i<MAX;i+=2)
        prime[i]=true;

    for(i=6;i<MAX;i+=3)
        prime[i]=true;

    for(i=10;i<MAX;i+=5)
        prime[i]=true;

    i=5;
    for(j=0;i*i<MAX;j++){
        if(j%2) i+=4;
        else i+=2;
        if(!prime[i]){
            for(k=i*i;k<MAX;k+=i)
                prime[k]=true;
        }
    }
}

int main(){
    SimpleSieve();
    int t;
    scanf("%d",&t);
    while(t--){
        long long low,high,count=0,i;
        scanf("%lld%lld",&low,&high);
        int l1=ceil(sqrt(low)),l2=floor(sqrt(high));
        for(i=l1;i<=l2;i++){
            if(prime[i]) count++;
        }
        printf("%lld\n",count);
    }
}
