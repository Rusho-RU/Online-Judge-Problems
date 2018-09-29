#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int areas = (n*(n-3)*(n*(n-3) + 14))/24 + n + 1;

        printf("%d\n",areas);
    }

    return 0;
}
