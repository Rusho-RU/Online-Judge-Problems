#include <bits/stdc++.h>
using namespace std;

#define MAX 44722
bool not_prime[MAX];
vector<int>prime;
int woo[3]={2,4,2};
unordered_map<int,bool>rem;

inline void SimpleSieve(){
    prime.push_back(2),prime.push_back(3),prime.push_back(5);
    for(int i=4;i<MAX;i+=2)
        not_prime[i]=true;

    for(int i=9;i<MAX;i+=6)
        not_prime[i]=true;

    for(int i=25;i<MAX;i+=10)
        not_prime[i]=true;

    int hold;
    for(int i=7,k=1;i<MAX;k++){
        if(!not_prime[i]){
            prime.push_back(i);
            hold=woo[k&1];
            for(int j=i*i,x=1;j<MAX;x++){
                not_prime[j]=true;
                j+=hold*i;
                hold=woo[hold%4];
            }
        }
        i+=woo[k&1];
    }
}

inline bool check(int n){
    if(n<MAX) return !not_prime[n];
    if(rem[n]) return true;
    for(int i=0;i<prime.size() && prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0)
            return false;
    }
    return rem[n]=true;
}

int main(){
    SimpleSieve();
    int t;
    scanf("%d",&t);
    while(t--){
        vector<int>p;
        int a,b,k,s,count=0;
        scanf("%d %d %d %d",&a,&b,&k,&s);
        for(int i=a;i<=b;i++){
            if(check(i))
                p.push_back(i);
        }

        for(int i=0;i+k-1<p.size();i++){
            if(p[i+k-1]-p[i]==s)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
