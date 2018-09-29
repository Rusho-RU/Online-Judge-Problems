#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n) && n){
        int ans = n%9;
        if(ans==0) ans = 9;
        printf("%d\n",ans);
    }

    return 0;
}
