#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int data[n],count=0;

        for(int i=0;i<n;i++)
            scanf("%d",&data[i]);

        for(int i=1;i<n-1;i++)
            if(!data[i-1] && !data[i+1]) count++;

        if(count%2) printf("Alice\n");
        else printf("Bob\n");
    }
    return 0;
}
