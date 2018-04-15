#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int data[n];

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
        }

        int sum = 0;

        for(int i=0; i<n; i++){
            sum+=data[i];
        }

        int target = (sum/2) + sum%2;

        int i;
        sum=0;

        for(i=0; i<n; i++){
            sum+=data[i];
            if(sum>=target)
                break;
        }

        printf("%d\n",i+1);
    }

    return 0;
}
