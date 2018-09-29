#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned int n, l, u;

    while(scanf("%u %u %u",&n,&l,&u)==3){
        unsigned int m = 0;

        for(int i=31; i>=0; i--){
            int bitl = (l>>i)&1, bitu = (u>>i)&1;

            if(bitl==bitu){
                m|=bitl * (1u<<i);
            }

            else{
                if((n>>i)&1){
                    u = (1u<<i) - 1;
                }
                else{
                    m|=(1u<<i);
                    l = (1u<<i);
                }
            }
        }

        printf("%u\n",m);
    }

    return 0;
}
