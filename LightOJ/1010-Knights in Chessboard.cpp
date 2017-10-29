#include <bits/stdc++.h>
using namespace std;

int decide(int n){
    if(n%4==0)
        return n;
    if(n%4==1 || n%4==3)
        return n+1;
    return n+2;
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int r,c;
        scanf("%d %d",&r,&c);

        int ans;

        if(r==1 || c==1)
            ans = max(r,c);

        else if(r==2 || c==2){
            int hold = max(r,c);

            ans = decide(hold);
        }

        else{
            ans = r*c;
            if(ans%2)
                ans++;
            ans/=2;
        }

        printf("Case %d: %d\n",++Case,ans);
    }

    return 0;
}
