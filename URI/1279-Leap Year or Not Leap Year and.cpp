#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        bool found=false, any=false;
        if((n%4==0 && n%100!=0) || n%400==0)
            puts("This is leap year."), found=true, any=true;

        if(n%15==0) puts("This is huluculu festival year."), any=true;

        if(found==true && n%55==0) puts("This is bulukulu festival year.");

        if(!any) puts("This is an ordinary year.");
    }
}
