#include <bits/stdc++.h>
using namespace std;

int absolute(int n){
    if(n<0) return -n;
    else return n;
}

int main(){
    int n,m,k;
    while(scanf("%d%d%d",&n,&m,&k)==3){
        int data,min=10000000;
        for(int i=1;i<=n;i++){
            scanf("%d",&data);
            if(data && data<=k && i!=m){
                int hold=absolute(m-i)*10;
                if(hold<min)
                    min=hold;
            }
        }
        printf("%d\n",min);
    }
    return 0;
}
