#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int key, locker;
        scanf("%d %d",&key,&locker);
        int ans = (locker - key) * key;
        ans += (key*(key-1))/2;
        printf("%d\n",ans);
    }

    return 0;
}
