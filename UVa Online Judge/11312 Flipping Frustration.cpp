#include <bits/stdc++.h>
using namespace std;

#define MAX 10000050

bool check(int n, int p, int l, int r, int Left, int Right){

}

void print(){
    puts("uh-oh!");
}

void print(int n){
    printf("%d\n",n);
}

int egcd(int a, int b, int *x, int *y){
    if(a%b==0){
        *x=0, *y=1;
        return b;
    }

    int x1, y1;
    int gcd = egcd(b, a%b, &x1, &y1);
    *y = x1-y1*(a/b);
    *x = y1;
    return gcd;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, l, r, p;
        scanf("%d %d %d %d",&n,&l,&r,&p);

        p--;

        if(!p){
            print(0);
            continue;
        }

        int x, y, x1, x2, y1, y2, ax = MAX, ay = MAX;

        int gcd = egcd(r, -l, &x, &y);

        int lower = ceil(-1.0*x*p/p), upper = floor(1.0*y*p/r);

        printf("%d %d\n",lower, upper);

        if(p%gcd || lower>upper){
            print();
            continue;
        }

        x1 = x*p/gcd + (-l)/gcd*lower;
        y1 = y*p/gcd - r/gcd*lower;

        if(x1>=0 && y1>=0 && check(n, p, y1, x1, l, r))
            ax = x1, ay = y1;

        x2 = x*p/gcd + (-l)/gcd*upper;
        y2 = y*p/gcd - r/gcd*upper;

        printf("%d %d %d %d\n",y1, x1, y2, x2);

        if(x2>=0 && y2>=0 && check(n, p, y2, x2, l, r) && x2+y2<ax+ay)
            ax = x2, ay = y2;
    }

    return 0;
}
