#include <bits/stdc++.h>
using namespace std;

#define MAX 100000

int parent[MAX], data[MAX];

void print(int id){
    if(id==-1)
        return;

    print(parent[id]);

    printf("%d\n",data[id]);
    return;
}

int main(){
    int seq[MAX], id[MAX], n=0, i=0, last=0;

    while(scanf("%d",&data[i])==1){
        int pos = lower_bound(seq, seq+n, data[i]) - seq;

        seq[pos] = data[i], id[pos] = i;

        parent[i] = pos>0 ? id[pos-1] : -1;

        if(pos==n)
            n++, last = i;
        i++;
    }

    printf("%d\n-\n",n);

    print(last);
}
