#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a_i[6]={0,1,3,6,7,7},a_v[]={0,0,0,0,1,2,3,4,5,5};
    int a_x[]={0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,12,14,16,18,20,22,24,26,28,30,33,36,39,42,45,48,51,54,57,60,64,65,66,67,68,69,70,71,72,73,75};
    while(scanf("%d",&n),n){
        int i=0,v=0,x=0,l=0,c=0;
        i=7*(int)(n/5)+a_i[n%5];
        v=5*(int)(n/10)+a_v[n%10];
        x=75*(n/50)+a_x[n%50];
        if(n>39 && n<90) l=n-39;
        else if(n>89) l=50;
        if(n>89 && n<101) c=n-89;
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,i,v,x,l,c);
    }
    return 0;
}
