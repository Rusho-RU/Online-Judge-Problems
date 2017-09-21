#include <bits/stdc++.h>
using namespace std;

#define MAXP 58
#define MAX 5001

vector<int>pos;
vector<int>neg;
long long p[MAX];

void calcu_penta(){
    for(int i=1;i<=MAXP;i++){
        pos.push_back((3*i*i-i)/2);
        neg.push_back((3*i*i+i)/2);
    }
    return;
}

long long fp(int n){
    if(n==0) return 1;
    if(n<0) return 0;
    if(p[n]) return p[n];
    long long sum=0,h1,h2,temp;
    for(int i=0;i<MAXP;i++){
        h1=fp(n-pos[i]), h2=fp(n-neg[i]);

        if(i%2) sum-=h1+h2;
        else sum+=h1+h2;
        if(!h1 || !h2) break;
    }
    return p[n]=sum;
}

int main(){
    p[0]=0,p[1]=1;
    calcu_penta();

    int n;
    while(scanf("%d",&n)){
        printf("%lld\n",fp(n));
    }
}
