#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    char c;
    int x,y;
    getchar();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%c",&c);
            if(c=='X')
                x=i,y=j;
        }
        getchar();
    }
    printf("%d,%d\n",x,y);
    return 0;
}
