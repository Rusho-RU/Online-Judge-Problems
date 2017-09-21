#include <bits/stdc++.h>
using namespace std;
long long hold,sum;
long long gcd(long long u, long long v)
{
    long long shift;
    if (u==0) return v;
    if (v==0) return u;
    shift=__builtin_ctz(u | v);
    u>>=__builtin_ctz(u);
    do{
        v >>= __builtin_ctz(v);
        if (u > v) {
            unsigned long long t=v;
            v=u;
            u=t;
        }
        v=v-u;
    } while (v!=0);
    return u<<shift;
}

long long lcm(long long a, long long b){
    return (a*b)/gcd(a,b);
}

void subset(long long *arr, long long index, long long size){
    vector<long long>ans;
    long long l,sum1,i;
    if(index==size){
        l=1,sum1=0;
        printf("%d\n",ans.size());
        for(i=0;i<ans.size();i++){
            l=lcm(l,ans[i]);
            //printf("%lld\n",l);
        }
        if(i%2==1)
            sum-=hold/l;
        else
            sum+=hold/l;
        //printf("%lld\n",sum1);
        return;
    }
    subset(arr, index+1, size);
    ans.push_back(arr[index]);
    subset(arr, index+1, size);
    ans.pop_back();
}

int main(){
    long long n,m;
    while(scanf("%lld%lld",&n,&m)==2){
        long long a[m],i,l,j;
        hold=n,sum=n;
        for(i=0;i<m;i++)
            scanf("%lld",&a[i]);
        subset(a,1,m);
        printf("%lld\n",sum);
    }
    return 0;
}
