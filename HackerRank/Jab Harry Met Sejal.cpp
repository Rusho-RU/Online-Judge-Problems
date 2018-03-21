#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int harry = n, sajal = 0, i=1, cnt=0;

        while(1){
            if(sajal+i > harry-1)
                break;
            sajal+=i++;
            harry--;
            cnt+=2;
        }

        printf("%d\n",cnt+(harry-sajal));
    }

    return 0;
}
