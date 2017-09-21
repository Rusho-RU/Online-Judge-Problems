#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,n,Case;
    for(Case=1;;Case++){
        scanf("%d%d",&r,&n);
        if(r==0 && n==0)
            break;
        printf("Case %d: ",Case);
        int need=(r-n)/n;
        if(r%n!=0 && r>n)
            need++;
        if(need>26)
            printf("impossible\n");
        else
            printf("%d\n",need);
    }
    return 0;
}
