#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int a,b,c;
        int ans = 1000000000;

        for(int i=0; i<n; i++){
            scanf("%d%d%d",&a,&b,&c);

            ans = min(ans, max(a,b)+c);
        }

        printf("%d\n",ans);
    }
    return 0;
}
