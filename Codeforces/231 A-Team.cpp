#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        int a,b,c,count=0;

        while(n--){
            scanf("%d %d %d",&a,&b,&c);
            if(a+b+c>1) count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
