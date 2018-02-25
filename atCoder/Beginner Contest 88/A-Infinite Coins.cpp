#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a;

    while(scanf("%d%d",&n,&a)==2){
        int rem = n%500;
        if(rem<=a)
            puts("Yes");
        else
            puts("No");
    }

    return 0;
}
