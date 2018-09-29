#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n,k,m;
        int sum=0, ans=-1;
        scanf("%d%d%d",&n,&k,&m);

        for(int i=0; i<m; i++){
            int val;
            scanf("%d",&val);
            sum+=val;
            if(ans==-1 && k<=sum)
                ans = i+1;
        }

        printf("%d\n",ans);
    }

    return 0;
}
