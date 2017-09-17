#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    while(cin>>n>>k){
        int val, total=0, ans=-1;
        for(int i=0; i<n; i++){
            cin>>val;
            total+=val;
            if(k<=0) continue;

            if(total<=8){
                k-=total;
                total=0;
            }

            else{
                k-=8;
                total-=8;
            }
            if(k<=0) ans=i+1;
        }

        cout<<ans<<endl;
    }

    return 0;
}
