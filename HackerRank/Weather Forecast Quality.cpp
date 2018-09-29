#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;


    for(int i=0; i<7; i++){
        int a;
        scanf("%d",&a);
        sum+=a;
    }

    for(int i=0; i<7; i++){
        int a;
        scanf("%d",&a);
        sum-=a;
    }

    if(sum<0) sum = -sum;

    printf("%d\n",sum);
    return 0;
}
