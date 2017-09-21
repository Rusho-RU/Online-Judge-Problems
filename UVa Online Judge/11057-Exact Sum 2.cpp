#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        int data[n],price,f,s;
        map<int,int>memorize;
        for(int i=0;i<n;i++){
            scanf("%d",&data[i]);
            memorize[data[i]]++;
        }
        scanf("%d",&price);

        int mid=price/2;

        if(price%2==0 && memorize[mid]>1) f=mid,s=mid;

        else{
            if(price%2==0) mid--;
            for(int i=mid;i>0;i--){
                if(memorize[i] && memorize[price-i]){
                    f=i,s=price-i;
                    break;
                }
            }
        }

        printf("Peter should buy books whose prices are %d and %d.\n\n",f,s);
    }
    return 0;
}

