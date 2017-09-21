#include <bits/stdc++.h>
using namespace std;

#define MAX 32768

bool not_prime[MAX+1];
vector<int>prime;
int Size[MAX+1];

void sieve(){
    for(int i=4;i<=MAX;i+=2)
        not_prime[i]=true;

    for(int i=9;i<=MAX;i+=6)
        not_prime[i]=true;

    for(int i=25;i<=MAX;i+=10)
        not_prime[i]=true;

    for(int i=7,k=1;i*i<=MAX;k++){
        if(!not_prime[i])
            for(int j=i*i;j<=MAX;j+=i*2)
                not_prime[j]=true;
        if(k%2) i+=4;
        else i+=2;
    }
}

void Insert(){
    for(int i=1;i<=MAX;i++){
        if(!not_prime[i]){
            prime.push_back(i);
        }
        Size[i]=prime.size();
    }
}

int main(){
    sieve();
    Insert();
    int n;
    while(scanf("%d",&n),n){
        int limit=n/2,count=0;
        for(int i=1;i<Size[limit];i++){
            if(!not_prime[n-prime[i]])
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}

