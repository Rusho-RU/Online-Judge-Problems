#include <bits/stdc++.h>
using namespace std;

void egcd(int a, int b, int *x, int *y){
    if(a%b==0){
        *x=0,*y=1;
        return;
    }

    int x1,y1,h;
    egcd(b,a%b,&x1,&y1);

    *y=x1-y1*(a/b);
    *x=y1;
    return;
}

int main(){
    int n,m,t;
    while(scanf("%d%d%d",&n,&m,&t)==3){
        int x,y;
        if(n<m) swap(n,m);
        egcd(n,m,&x,&y);
        cout<<x<<" "<<y<<endl;
    }
}
