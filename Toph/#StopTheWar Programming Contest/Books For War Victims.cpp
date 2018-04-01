#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int ans = n/3 + (n%3!=0);

        printf("%d\n",ans);
    }

    return 0;
}
