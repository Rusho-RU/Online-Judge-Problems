#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,a,b,c,d;
    while(cin>>s>>a>>b>>c>>d){
        int h1=s*a+c+c, h2=s*b+d+d;

        if(h1<h2) puts("First");
        else if(h2<h1) puts("Second");
        else puts("Friendship");
    }
    return 0;
}
