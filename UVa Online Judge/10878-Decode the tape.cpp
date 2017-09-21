#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    int a[9];
    a[0]=1;
    for(int i=1;i<9;i++)
        a[i]=a[i-1]*2;
    char c;
    int i,hold,end=0,sum=0;
    string s;
    while(1){
        sum=0;
        for(i=9;i>-2;i--){
            scanf("%c",&c);
            if(c=='o'){
                if(i>3) sum+=a[i-1];

                else if(i<3) sum+=a[i];
            }
            else if(c=='_') end++;
        }
        getchar();
        if(end==22) break;
        if(sum==13) sum=10;
        else if(sum==7) sum=32;
        else if(sum==8) sum=0;
        if(sum) s+=sum;
    }
    cout<<s;
    return 0;
}
