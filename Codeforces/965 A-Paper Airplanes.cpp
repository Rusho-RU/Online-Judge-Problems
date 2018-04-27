#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, s, p;

    while(scanf("%d%d%d%d",&k,&n,&s,&p)==4){
        int each = n/s;

        if(n%s) each++;

        int total_sheets = each*k;
        int ans = total_sheets/p;

        if(total_sheets%p) ans++;

        printf("%d\n",ans);
    }

    return 0;
}
