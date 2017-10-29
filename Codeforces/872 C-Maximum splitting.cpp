#include <bits/stdc++.h>
using namespace std;

vector<int>v;
int ans;

void factor(int n){
    if(n==1){
        v.push_back(1);
        return;
    }
    for(int i=2; i*i<=n; i++){
        while(n%i==0){
            v.push_back(i);
            ans*=i;
            n/=i;
        }
    }

    if(n!=1){
        v.push_back(n);
        ans*=n;
    }
}

int main(){
    int q;

    while(scanf("%d",&q)==1){
        while(q--){
            ans = 1;
            v.clear();
            int n;
            scanf("%d",&n);
            factor(n);
            if(v.size()==2){
                puts("1");
            }

            else if(v.size()==1)
                puts("-1");

            else{
                ans/=v[0];
                ans/=v[1];
                printf("%d\n",ans);
            }
        }
    }

    return 0;
}
