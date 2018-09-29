#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n,x,s;
        scanf("%d%d%d",&n,&x,&s);

        int box = x;

        for(int i=0; i<s; i++){
            int a,b;
            scanf("%d%d",&a,&b);
            if(a==box)
                box = b;
            else if(b==box)
                box = a;
        }

        printf("%d\n",box);
    }

    return 0;
}
