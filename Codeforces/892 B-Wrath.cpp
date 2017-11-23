#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int val;
        stack<int>stck;

        for(int i=0; i<n; i++){
            scanf("%d",&val);

            while(!stck.empty() && stck.top()>=i-val)
                stck.pop();
            stck.push(i);
        }

        printf("%d\n",stck.size());
    }

    return 0;
}
