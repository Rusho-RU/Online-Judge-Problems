#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n<11)
            printf("0 %d\n",n);
        else
            printf("%d %d\n",n-10,10);
    }
    return 0;
}
