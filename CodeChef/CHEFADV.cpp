#include <bits/stdc++.h>
using namespace std;

bool isPossible(int n, int m, int x, int y){
    n--, m--;

    if(n%x==0 && m%y==0)
        return true;
    n--, m--;

    if(n%x==0 && m%y==0 && n>=0 && m>=0)
        return true;
    return false;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n,m,x,y;
        scanf("%d%d%d%d",&n,&m,&x,&y);

        if(isPossible(n,m,x,y))
            puts("Chefirnemo");
        else
            puts("Pofik");
    }

    return 0;
}
