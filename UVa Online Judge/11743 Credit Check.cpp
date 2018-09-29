#include <bits/stdc++.h>
using namespace std;

int digitSum(int n){
    return (n/10) + n%10;
}

int calculate(int n){
    int sum;

    if(sign==1){

    }

    sum= (n/100)%10;
    sum+=n%10;
    return digitSum(sum);
}

int sum(int num[]){
    int total = 0;

    for(int i=0 i<4; i++){
        total += calculate(num[i]);
    }

    return total;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int num[4];

        for(int i=0; i<4; i++){
            scanf("%d",&num[i]);
        }

        int sum1 = sum(num);
        int sum2 =
    }
}
