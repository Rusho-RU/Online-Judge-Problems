#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        int l=n/2,v,s1=0,s2=0;

        for(int i=0;i<l;i++){
            scanf("%d",&v);
            s1+=v;
        }

        for(int i=0;i<l;i++){
            scanf("%d",&v);
            s2+=v;
        }

        int ans=s1-s2;
        if(ans<0) ans=-ans;
        printf("%d\n",ans);
    }
    return 0;
}
