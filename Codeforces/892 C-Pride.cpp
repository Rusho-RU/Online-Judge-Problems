#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        int data[n], cnt=0, one=0;
        bool found = false;

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
            if(data[i]==1)
                one++;
        }

        if(one){
            printf("%d\n",n-one);
            continue;
        }

        for(int i=n-1; i>0 && !found; i--){
            for(int j=1; j<=i && !found; j++){
                data[j-1] = __gcd(data[j-1], data[j]);
                if(data[j-1] == 1)
                    found = true;
            }
            cnt++;
        }

        if(found)
            printf("%d\n",cnt+n-1);
        else
            puts("-1");
    }

    return 0;
}
