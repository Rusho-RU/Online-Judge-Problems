#include <bits/stdc++.h>
using namespace std;

int digitSum(int n){
    return (n/10) + n%10;
}

int calculate(int n, bool isEven){
    int sum;

    if(!isEven){
        sum = (n/100)%10;
        sum += n%10;
    }

    else{
        sum = digitSum(2*((n/10)%10));
        sum += digitSum(2*(n/1000));
    }

    return sum;
}

int sum(int num[], bool isEven){
    int total = 0;

    for(int i=0; i<4; i++){
        total += calculate(num[i], isEven);
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

        int sum1 = sum(num, true);
        int sum2 = sum(num, false);

        int sum = sum1+sum2;

        if(sum%10==0)
            puts("Valid");
        else
            puts("Invalid");
    }

    return 0;
}
