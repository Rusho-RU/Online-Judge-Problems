#include <bits/stdc++.h>
using namespace std;

int main(){
    int s;

    while(scanf("%d",&s)==1){
        if(s > 110){
            printf("%d License removed\n",(s-90)*500);
        }

        else if(s > 90){
            printf("%d Warning\n",(s-90)*300);
        }

        else
            puts("0 No punishment");
    }

    return 0;
}
