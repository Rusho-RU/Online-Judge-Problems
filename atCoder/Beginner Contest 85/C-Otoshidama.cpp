#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,y;

    while(scanf("%d%d",&n,&y)==2){
        int a=-1,b=-1,c=-1;
        bool found = false;

        for(int i=0; i<=n && !found; i++){
            for(int j=0; j<=n-i && !found; j++){
                int k = n-i-j;
                if(i*10000 + j*5000 + k*1000 == y)
                    a=i, b=j, c=k, found = true;
            }
        }

        printf("%d %d %d\n",a,b,c);
    }

    return 0;
}
