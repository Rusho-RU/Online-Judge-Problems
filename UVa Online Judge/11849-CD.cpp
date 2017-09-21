#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(scanf("%d%d",&n,&m) && n+m){
        unordered_map<long long,bool>jack;
        int count=0;
        long long x;
        for(int i=0;i<n;i++){
            scanf("%lld",&x);
            jack[x]=true;
        }

        for(int i=0;i<n;i++){
            scanf("%lld",&x);
            if(jack[x]) count++;
        }

        printf("%d\n",count);
    }
    return 0;
}
