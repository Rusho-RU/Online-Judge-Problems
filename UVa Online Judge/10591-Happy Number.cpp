#include <bits/stdc++.h>
using namespace std;

int nextNum(int n){
    int sum = 0 ;

    while(n){
        int rem = n%10;
        sum+=rem*rem;
        n/=10;
    }

    return sum;
}

bool happy(int n){
    int slow=n, fast=n;

    do{
        slow = nextNum(slow);
        fast = nextNum(nextNum(fast));
    }while(slow!=fast);

    return slow==1;
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        printf("Case #%d: %d is ",++Case, n);

        if(happy(n))
            puts("a Happy number.");
        else
            puts("an Unhappy number.");
    }

    return 0;
}
