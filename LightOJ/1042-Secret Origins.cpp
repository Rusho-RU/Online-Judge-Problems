#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,Case=0;
    scanf("%d",&t);

    while(t--){
        int n,one=0;
        scanf("%d",&n);

        while(n){
            if(n%2) one++;
            n/=2;
        }
        printf("%d\n",one);
    }
}
