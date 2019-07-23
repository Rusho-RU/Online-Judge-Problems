#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        for(int i=0; i<n; i++){
            for(int j=n-i; j>1; j--)
                printf(" ");

            for(int j=0; j<2*i+1;j++)
                printf("*");

            puts("");
        }

        for(int i=n-2; i>=0; i--){
            for(int j=n-2; j>=i; j--)
                printf(" ");

            for(int j=0; j<2*i+1; j++)
                printf("*");

            puts("");
        }
    }
}
