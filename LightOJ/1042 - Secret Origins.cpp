#include <bits/stdc++.h>
using namespace std;


int one(int n);

int main(){
    int t,z;
    scanf("%d",&t);
    for(z=0;z<t;z++){
        long long int n,i;
        scanf("%d",&n);
        int hold=one(n);
        for(i=n+1;;i++){
            if(one(i)==hold)
                break;
        }
        printf("Case %d: %d\n",z+1,i);
    }
    return 0;
}

long long int one(int n){
    if(n==0)
        return 0;
    return (n%2)+one(n/2);
}
