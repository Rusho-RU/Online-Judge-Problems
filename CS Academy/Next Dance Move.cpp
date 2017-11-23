#include <bits/stdc++.h>
using namespace std;

int main(){
    int moves[10] = {1,2,3,1,2,3,1,2,3,4};

    int n;

    while(scanf("%d",&n)==1){
        n--;
        printf("%d\n",moves[n%10]);
    }

    return 0;
}
