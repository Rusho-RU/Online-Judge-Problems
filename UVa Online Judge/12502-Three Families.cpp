#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);

        int ans = c*(2*a-b)/(a+b);

        printf("%d\n",ans);
    }

    return 0;
}
