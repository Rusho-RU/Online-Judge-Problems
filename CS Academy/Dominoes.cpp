#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;

    while(scanf("%d %d",&n,&k)==2){
        vector<int>dominoes(n);

        for(int i=0; i<n; i++)
            scanf("%d",&dominoes[i]);

        int largest = k+1, left = 0, right = 0;

        while(right<n){
            while((dominoes[right] - dominoes[left]) - (right - left) >k)
                ++left;
            largest = max(largest, right - left + 1 + k);
            right++;
        }

        printf("%d\n",largest);
    }

    return 0;
}

