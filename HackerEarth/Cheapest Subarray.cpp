#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int data[n];
        int mn = INT_MAX;

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
            if(i)
                mn = min(mn, data[i]+data[i-1]);
        }

        printf("%d\n", mn);
    }

    return 0;
}
