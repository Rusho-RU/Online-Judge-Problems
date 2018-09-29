#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;

    while(scanf("%d %d",&n,&k)==2){
        for(int i=0; i<k; i++){
            if(n%10){
                n--;
            }
            else n/=10;
        }

        printf("%d\n",n);
    }

    return 0;
}

