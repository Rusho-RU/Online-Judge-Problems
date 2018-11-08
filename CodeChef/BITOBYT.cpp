#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        int bits = 1, bytes = 0, nibbles = 0;

        for(int i=3; i<=n; i+=2){
            if(bits)
                bits--, nibbles++;
            if((i-1)%8==0 && nibbles)
                nibbles--, bytes++;
            if((i-1)%16==0 && bytes)
                bytes--, bits+=2;
        }

        printf("%d %d %d\n",bits, nibbles, bytes);
    }

    return 0;
}
