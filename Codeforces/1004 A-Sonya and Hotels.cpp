#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,d;

    while(scanf("%d%d",&n,&d)==2){
        int data[n];

        for(int i=0; i<n; i++)
            scanf("%d",&data[i]);

        int cnt=2;

        for(int i=1; i<n; i++){
            int diff = data[i]-data[i-1];
            if(diff>2*d)
                cnt+=2;
            else if(diff==2*d)
                cnt++;
        }

        printf("%d\n",cnt);
    }

    return 0;
}
