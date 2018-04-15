#include <bits/stdc++.h>
using namespace std;

#define INF 212345678

int pow10[10];

bool isSquare(int n){
    if(n==1)
        return true;

    int cnt;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            cnt=0;
            while(n%i==0){
                n/=i;
                cnt++;
            }

            if(cnt%2)
                return false;
        }
    }

    if(n!=1)
        return false;
    return true;
}

int getDigit(int n){
    int digit = 0;

    while(n){
        n/=10;
        digit++;
    }

    return digit;
}

int getNum(int n, int index){
    int digit = getDigit(n);

    int pre = n/pow10[digit - index + 1] * pow10[digit - index];
    int post = n % pow10[index + 1];

    return pre+post;
}

int knapsack(int n, int index){
    if(n==0) return 0;
    if(n==1) return 1;

    int d = getDigit(n);

    if(isSquare(n)){
        return d;
    }

    if(index > d){
        return 0;
    }

    int ret1 = 0, ret2 = 0;

    ret1 = knapsack(n, index+1);
    ret2 = knapsack(getNum(n, index), 1);

    return max(ret1, ret2);
}

int main(){
    int n;
    pow10[0] = 1;

    for(int i=1; i<10; i++)
        pow10[i] = pow10[i-1] * 10;

    cout<<getNum(1020, 1)<<endl;

    while(scanf("%d",&n)==1){
        int ans = knapsack(n, 1);

        if(ans)
            printf("%d\n",getDigit(n) - ans);
        else
            puts("-1");
    }

    return 0;
}
