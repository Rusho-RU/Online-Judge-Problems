#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n),n){
        priority_queue<int>p;
        int i,temp1,temp2;
        for(i=0;i<n;i++){
            scanf("%d",&temp1);
            p.push(-1*temp1);
        }
        int sum=0;
        while(p.size()!=1){
            temp1=p.top();
            p.pop();
            temp2=p.top();
            p.pop();
            sum+=-1*(temp1+temp2);
            p.push(temp1+temp2);
        }
        printf("%d\n",sum);
    }
    return 0;
}
