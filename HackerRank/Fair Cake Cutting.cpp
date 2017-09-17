#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3){
        double d=(double)a/b;
        double ans=c/d;
        printf("%0.0lf\n",ans);
    }
    return 0;
}
