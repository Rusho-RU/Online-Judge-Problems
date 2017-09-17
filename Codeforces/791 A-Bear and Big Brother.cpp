#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    while(scanf("%d%d",&a,&b)==2){
        int i;
        for(i=1;;i++){
            a*=3,b*=2;
            if(a>b) break;
        }
        printf("%d\n",i);
    }
    return 0;
}
