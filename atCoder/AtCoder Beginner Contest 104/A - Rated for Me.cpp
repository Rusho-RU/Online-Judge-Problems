#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        if(n<1200)
            puts("ABC");
        else if(n<2800)
            puts("ARC");
        else
            puts("AGC");
    }

    return 0;
}
