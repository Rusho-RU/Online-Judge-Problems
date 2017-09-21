#include <bits/stdc++.h>
using namespace std;

#define MAX 18409202

struct type{
    int a,b;
};

bool not_prime[MAX];
vector<int>prime;

inline void sieve(){
    not_prime[1]=not_prime[0]=true;
    for(int i=2;i*i<MAX;i++){
        if(!not_prime[i]){
            prime.push_back(i);
            for(int j=i*i;j<MAX;j+=i)
                not_prime[j]=true;
        }
    }
}

int main(){
    sieve();
    cout<<prime.size()<<endl;

    vector<type>v;

    for(int i=0;i<prime.size();i++){
        if(!not_prime[prime[i]+2]){
            v.push_back({i,i+1});
        }
    }
    int n;
    while(scanf("%d",&n)==1){
        printf("(%d, %d)\n",prime[v[n-1].a],prime[v[n-1].b]);
    }
}
