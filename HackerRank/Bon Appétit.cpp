#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;

    while(scanf("%d %d",&n,&k)==2){
        int data[n], sum=0;

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
            sum+=data[i];
        }

        int bill;
        scanf("%d",&bill);

        int should = sum/2 - data[k]/2;

        if(bill == should)
            puts("Bon Appetit");
        else
            printf("%d\n",data[k]/2);
    }

    return 0;
}
