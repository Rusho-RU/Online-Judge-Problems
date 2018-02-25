#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,a,b;

    while(scanf("%d%d%d",&x,&a,&b)==3){
        x-=a;
        int amount = x/b;
        x -= amount*b;
        printf("%d\n",x);
    }

    return 0;
}
