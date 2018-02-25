#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,x;

    while(scanf("%d%d%d%d",&a,&b,&c,&x)==4){
        long long cnt = 0;

        for(int i=0; i<=a; i++){
            for(int j=0; j<=b; j++){
                for(int k=0; k<=c; k++){
                    if(i*500 + j*100 + k*50 == x)
                        cnt++;
                }
            }
        }

        printf("%lld\n",cnt);
    }

    return 0;
}
