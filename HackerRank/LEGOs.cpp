#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int data[6], ans=1;

        for(int i=0; i<6; i++)
            scanf("%d",&data[i]);

        for(int i=0; i<4; i++)
            ans*=data[i];

        ans/=data[4], ans/=data[5];
        printf("%d\n",ans);
    }

    return 0;
}
