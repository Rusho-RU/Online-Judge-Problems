#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)==2){
        int h1=(m/2)-(n-1)/2,h2=(m/3)-(n-1)/3;
        if(h1==0) printf("%d\n",n);
        else if(h1>h2) printf("2\n");
        else printf("3\n");
    }
    return 0;
}
