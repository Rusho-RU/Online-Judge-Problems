#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;

    while(scanf("%d%d",&a,&b) && a+b){
        int la = floor(sqrt(a-1)), lb = floor(sqrt(b));
        printf("%d\n",lb-la);
    }

    return 0;
}
