#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        n+=9;
        if(n%2==0)
            printf("1\n%d\n",n/2);
        else
            puts("0");
    }
}
