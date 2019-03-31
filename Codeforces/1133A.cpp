#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    int h1, h2, m1, m2;

    while(scanf("%d:%d %d:%d",&h1, &m1, &h2, &m2)==4){
        int h = h1+(h2-h1)/2;
        int m = m2-m1;

        if((h2-h1)&1){
            m+=60;
        }

        m/=2;
        m += m1;
        h+=m/60;
        m%=60;

        printf("%02d:%02d\n", h, m);
    }

    return 0;
}

