#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        int data[n], cnt=0;

        for(int i=0; i<n; i++)
            scanf("%d",&data[i]);

        for(int i=1; i<n-1; i++)
            if((data[i]<data[i-1] && data[i]<data[i+1]) || (data[i]>data[i-1] && data[i]>data[i+1]))
                cnt++;

        printf("%d\n",cnt);
    }
}
