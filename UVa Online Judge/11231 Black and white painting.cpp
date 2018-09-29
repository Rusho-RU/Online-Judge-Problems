#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x;

    while(scanf("%d%d%d",&n,&m,&x) && n+m+x){
        int ans = (n-7)*(m-7);
        ans/=2;

        if(n%2==0 && m%2==0 && x==1){
            ans++;
        }

        printf("%d\n",ans);
    }

    return 0;
}
