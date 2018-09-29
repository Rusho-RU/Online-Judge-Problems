#include <bits/stdc++.h>
using namespace std;

bool cube, square;

void factor(int n){
    for(int i=2; i*i<=n; i++){
        int freq=0;
        if(n%i==0){
            while(n%i==0){
                n/=i;
                freq++;
            }
            if(freq%2)
                square = false;
            if(freq%3)
                cube = false;
        }
    }

    if(n!=1){
        cube = square = false;
    }

    return;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        cube = square = true;
        factor(n);

        if(cube && square)
            puts("Both");
        else if(cube)
            puts("Perfect Cube");
        else if(square)
            puts("Perfect Square");
        else
            puts("None");
    }

    return 0;
}
