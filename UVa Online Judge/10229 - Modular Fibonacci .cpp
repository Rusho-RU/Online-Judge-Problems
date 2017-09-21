#include <bits/stdc++.h>
using namespace std;
long long MOD;
struct A{
    long long ara[5][5];
};

A Matrix_Mul(A a, A b){
    A  result;
    int i,j,k;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            result.ara[i][j]=0;
            for(k=0;k<2;k++){
                result.ara[i][j]+=a.ara[i][k]*b.ara[k][j];
            }
            result.ara[i][j]%=MOD;
        }
    }
    return result;
}

A BigMod(A a, long long n){
    A ret;
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(i==j)
                ret.ara[i][j]=1;
            else
                ret.ara[i][j]=0;
        }
    }
    while(n){
        if(n&1){

        }
    }
}
