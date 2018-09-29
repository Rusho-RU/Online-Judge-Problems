#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1, m1, h2, m2;

    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2) && h1+h2+m1+m2){
        int sleep = h1*60+m1;
        int wake = h2*60+m2;

        if(wake<sleep)
            wake+=24*60;

        printf("%d\n",wake-sleep);
    }

    return 0;
}
