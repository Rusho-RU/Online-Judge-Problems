#include <bits/stdc++.h>
using namespace std;

#define br -999999

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int ans=n,cmax=n,cmin=n,pmax=n,pmin=n;

        while(scanf("%d",&n) && n!=br){
            cmax=max(pmax*n,max(pmin*n,n));
            cmin=min(pmax*n,min(pmin*n,n));
            ans=cmax;

            pmax=cmax, pmin=cmin;
        }

        cout<<ans<<endl;
    }
}
