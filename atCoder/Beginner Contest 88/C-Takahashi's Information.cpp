#include <bits/stdc++.h>
using namespace std;

int main(){
    int c[3][3], a[3], b[3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&c[i][j]);
        }
    }

    b[0] = c[0][0];
    b[1] = c[0][1];
    b[2] = c[0][2];

    a[0] = 0;
    a[1] = c[1][1] - b[1];
    a[2] = c[2][2] - b[2];

    bool isCorrect = true;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(a[i] + b[j] != c[i][j])
                isCorrect = false;
        }
    }

    if(isCorrect)
        puts("Yes");
    else
        puts("No");
}
