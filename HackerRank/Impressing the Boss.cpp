#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int data[n];

        for(int i=0; i<n; i++)
            scanf("%d",&data[i]);

        int cnt=0;

        for(int i=1; i<n; i++){
            if(data[i]<data[i-1])
                cnt++;
        }

        if(cnt==1)
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}
