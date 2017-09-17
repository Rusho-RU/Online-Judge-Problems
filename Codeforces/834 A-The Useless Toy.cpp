#include <bits/stdc++.h>
using namespace std;

int absolute(int n){
    if(n<0) return -n;
    return n;
}

int main(){
    char c1,c2,s;
    int n;
    map<char,int>m;
    m['^']=1, m['>']=2, m['v']=3, m['<']=4;

    while(scanf(" %c%c%c%d",&c1,&s,&c2,&n)==4){
        int h=m[c2]-m[c1], rem1=absolute(h), rem2=4-rem1;

        if(rem1==2 || !rem1) puts("undefined");

        else if((n+4)%4==rem1)
            if(h<0) puts("ccw");
            else puts("cw");

        else if((n+4)%4==rem2)
            if(h>0) puts("ccw");
            else puts("cw");

        else puts("undefined");
    }

    return 0;
}
