#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int data[n],cnt=0;

        for(int i=0;i<n;i++){
            scanf("%d",&data[i]);
        }

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(data[j]<data[i])
                    swap(data[i],data[j]), cnt++;
            }
        }

        printf("Optimal train swapping takes %d swaps.\n",cnt);
    }

    return 0;
}
