#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int data[10] = {0, 111, 222, 333, 444, 555, 666, 777, 888, 999};

    while(scanf("%d",&n)==1){
        for(int i=0; i<10; i++){
            if(n<=data[i]){
                printf("%d\n",data[i]);
                break;
            }
        }
    }

    return 0;
}
