#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        int hold=n/2+(n%2);
        printf("%d\n",hold-1);
    }
    return 0;
}
