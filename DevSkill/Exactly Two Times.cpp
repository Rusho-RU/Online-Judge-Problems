#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int data[n];

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
        }

        sort(data, data+n);

        int ans;

        for(int i=1; i<n; i++){
            if(data[i]==data[i-1]){
                ans = data[i];
                break;
            }
        }

        printf("%d",&ans);
    }

    return 0;
}
