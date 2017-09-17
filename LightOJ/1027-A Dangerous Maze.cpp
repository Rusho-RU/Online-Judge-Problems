#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int val,n,cnt=0,probability=0;

        while(n--){
            scanf("%d",&val);
            if(val>0)
                cnt++;
            probability+=absolute(val);
        }


    }
}
