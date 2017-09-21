#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        int i=1,j=1,count=1;
        char c='E';
        while(count!=n){
            if(i==1 && c=='E') j++,c='D';
            else if(j==1 && c=='E') i++,c='U';
            else if(c=='D'){
                i++,j--;
                if(i==1 || j==1)
                    c='E';
            }
            else if(c=='U'){
                j++,i--;
                if(i==1 || j==1)
                    c='E';
            }
            count++;
        }
        printf("TERM %d IS %d/%d\n",n,i,j);
    }
    return 0;
}
