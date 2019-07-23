#include <bits/stdc++.h>
using namespace std;

int main(){
    int start, stop;

    while(scanf("%d-%d",&start,&stop)==2){
        if(start<2000){
            puts("CSE department started its journey from 2000-2001");
            continue;
        }

        start-=2000;
        printf("CSE-%d\n",start+1);
    }

    return 0;
}
