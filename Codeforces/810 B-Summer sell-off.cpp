#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,f;
    while(scanf("%d%d",&n,&f)==2){
        long long a,b,sum=0;
        priority_queue<long long>q;

        for(int i=0;i<n;i++){
            scanf("%I64d %I64d",&a,&b);
            long long h1=min(a,b),h2=min(2*a,b);
            sum+=h1;
            q.push(h2-h1);
        }

        while(f-- && !q.empty()){
            sum+=q.top();
            q.pop();
        }

        printf("%I64d\n",sum);
    }
    return 0;
}
