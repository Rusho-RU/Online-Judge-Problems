#include <bits/stdc++.h>
using namespace std;

#define MAX (int)1e6

int primef[MAX];

void sieve(){
    primef[0]=0, primef[1]=1;

    for(int i=2;i*i<=MAX;i++){
        if(!primef[i]){
            primef[i]=i;
            for(int j=i*i;j<=MAX;j+=i)
                primef[j]=i;
        }
    }
}

void f(int n){
    while(1){
        printf("%d",primef[n]);
        n/=primef[n];
        if(n!=1) printf(" * ");
        else break;
    }
    return;
}

int main(){
    sieve();
    int n;
    while(scanf("%d",&n)==1){
        f(n);
        cout<<endl;
    }
}
