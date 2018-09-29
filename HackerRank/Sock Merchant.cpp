#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int sock[n];

        for(int i=0; i<n; i++)
            scanf("%d",&sock[i]);

        sort(sock, sock+n);

        int cnt=0, ans=0;

        for(int i=1; i<n; i++){
            if(sock[i]==sock[i-1])
                cnt++;
            else{
                ans += ++cnt/2;
                cnt=0;
            }
        }

        ans += ++cnt/2;

        printf("%d\n",ans);
    }

    return 0;
}
