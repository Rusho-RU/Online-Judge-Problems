#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    vector<long long>q;
    scanf("%lld",&n);
    q.push_back(n);
    long long m=n;
    int s=1;
    printf("%lld\n",m);
    while(scanf("%lld",&n)==1){
        int h1,h2;
        q.push_back(n);
        sort(q.begin(),q.end());
        s=q.size();
        if(s%2==0){
            h1=s/2;
            h2=(s+2)/2;
            printf("%lld\n",(q[h1-1]+q[h2-1])/2);
        }

        else{
            h1=(s+1)/2;
            printf("%lld\n",q[h1-1]);
        }
    }
    return 0;
}
