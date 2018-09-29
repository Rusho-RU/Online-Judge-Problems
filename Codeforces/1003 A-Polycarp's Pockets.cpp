#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int data[n];

        for(int i=0; i<n; i++)
            scanf("%d",&data[i]);

        sort(data, data+n);

        int mx = INT_MIN;

        for(int i=0; i<n; i++){
            int j;

            for(j=i+1; j<n; j++)
                if(data[j]!=data[i])
                    break;
            mx = max(mx, j-i);
            i = j-1;
        }

        printf("%d\n",mx);
    }

    return 0;
}
