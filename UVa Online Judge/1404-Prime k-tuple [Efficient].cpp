#include <bits/stdc++.h>
using namespace std;

#define maxv 44722
#define maxn 44722+10
#define maxl 10000009

bool nprime[maxl],not_prime[maxn];
vector<int>prime;
int pcnt;
int woo[3]={2,4,2};

void init_prime(){
    prime.push_back(0),prime.push_back(2),prime.push_back(3),prime.push_back(5);
    for(int i=4;i<maxv;i+=2)
        not_prime[i]=true;

    for(int i=9;i<maxv;i+=6)
        not_prime[i]=true;

    for(int i=25;i<maxv;i+=10)
        not_prime[i]=true;

    int hold;
    for(int i=7,k=1;i<maxv;k++){
        if(!not_prime[i]){
            prime.push_back(i);
            hold=woo[k&1];
            for(int j=i*i,x=1;j<maxv;x++){
                not_prime[j]=true;
                j+=hold*i;
                hold=woo[hold%4];
            }
        }
        i+=woo[k&1];
    }
}

int solve(){
    int a,b,k,s;
    scanf("%d%d%d%d",&a,&b,&k,&s);
    if(a>b) return 0;

    for(int i=0;i<=b-a;i++) nprime[i]=0;

    int sz=sqrt(b);

    for(int i=1;i<=pcnt && prime[i]<=sz;i++){
        int k=a/prime[i]*prime[i];
        if(k<a) k+=prime[i];
        if(k==prime[i]) k+=prime[i];

        k=max(prime[i]*prime[i],k);

        while(k>=a && k<=b)
            nprime[k-a]=1,k+=prime[i];
    }

    vector<int>p;
    for(int i=0;i<=b-a;i++)
        if(!nprime[i]) p.push_back(i+a);

    int ret=0;

    for(int i=0,sz=p.size();i+k-1<sz;i++)
        if(p[i+k-1]-p[i]==s) ret++;

    return ret;
}

int main(){
    int t;
    init_prime();
    pcnt=prime.size()-1;
    scanf("%d",&t);
    while(t--){
        int ans=solve();
        printf("%d\n",ans);
    }
    return 0;
}
