#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    bool rick[1000000], morty[1000000];
    memset(rick, false, sizeof rick);
    memset(morty, false, sizeof morty);

    int ans = -1;

    for(int i=0; i<10000 && ans == -1; i++){
        int x=b+i*a, y=d+i*c;
        if(x>1000000 || y>1000000)
            break;
        rick[x] = true, morty[y] = true;
        if(rick[y] && morty[x])
            ans = min(x,y);
        else if(rick[y])
            ans = y;
        else if(morty[x])
            ans = x;
    }

    printf("%d\n",ans);
}
