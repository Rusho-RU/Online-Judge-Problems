#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    scanf("%d%d",&b,&a);
    a*=2;
    int ans=a/b+(a%b!=0);
    printf("%d\n",ans);
    return 0;
}
