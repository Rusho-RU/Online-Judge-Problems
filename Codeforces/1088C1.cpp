#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    scanf("%d",&n);
    int data[n];

    for(int i=0; i<n; i++){
        scanf("%d",&data[i]);
        data[i]%=n;
    }

    int prev = 0;

    printf("%d\n",n+1);

    for(int i=n-1; i>=0; i--){
        int val = (data[i]+prev)%n;
        int dorkar = (i - val + n)%n;
        prev = (prev+dorkar)%n;

        printf("1 %d %d\n", i+1, dorkar);
    }

    printf("2 %d %d", n, n);

    return 0;
}

