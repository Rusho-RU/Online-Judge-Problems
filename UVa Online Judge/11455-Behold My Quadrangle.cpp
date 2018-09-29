#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int a,b,c,d;
        scanf("%d %d %d %d",&a, &b, &c, &d);
        if(a==b && b==c && c==d)
            puts("square");

        else if(a==b && c==d || a==c && b==d || a==d && b==c)
            puts("rectangle");

        else if(a+b+c>=d && b+c+d>=a && c+d+a>=b && d+a+b>=c)
            puts("quadrangle");

        else
            puts("banana");
    }

    return 0;
}
