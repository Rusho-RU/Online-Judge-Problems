#include <bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        vector<int>a;
        int n;
        for(int i=0;i<3;i++){
            scanf("%d",&n);
            a.push_back(n);
        }
        if(!a[0] && !a[1] && !a[2])
            break;
        sort(a.begin(),a.end());
        if(sqrt((a[0]*a[0])+(a[1]*a[1]))==a[2])
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
