#include <bits/stdc++.h>
using namespace std;

#define MAX 100010

int n, h;
int a[MAX], b[MAX];

int knapsack(int i, int d){
    if(d>=h)
        return 0;
    if(i==n)
        return 0;

    int r1 = 1 + knapsack(i, d+a[i]);
    int r2 = 1 + knapsack(i+1, d+b[i]);

    return min(r1, r2);
}

int main(){
    scanf("%d %d",&n, &h);

    for(int i=0; i<n; i++)
        scanf("%d%d",&a[i],&b[i]);

    int cnt = knapsack(0,0);

    printf("%d\n",cnt);

    return 0;
}
