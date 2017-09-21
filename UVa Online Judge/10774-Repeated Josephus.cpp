#include <bits/stdc++.h>
using namespace std;

vector<int>pre;

void calculate(){
    int hold=1;
    while(hold<=30000){
        pre.push_back(hold);
        hold*=2;
    }
}

int Josephus(int n){
    int i;
    for(i=0;i<pre.size();i++){
        if(n<pre[i]) break;
    }
    n-=pre[i-1];
    n<<=1;
    n+=1;
    return n;
}

int main(){
    calculate();
    int t,Case=0;
    scanf("%d",&t);
    while(t--){
        int i,n,hold;
        scanf("%d",&n);
        for(i=0;;i++){
            hold=Josephus(n);
            if(hold==n) break;
            n=hold;
        }
        printf("Case %d: %d %d\n",++Case,i,hold);
    }
    return 0;
}
