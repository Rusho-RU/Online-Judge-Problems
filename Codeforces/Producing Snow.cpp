#include <bits/stdc++.h>
using namespace std;

#define MAX 100050

int tree[4*MAX], v[MAX], prop[4*MAX];

void init(int node, int i, int j){
    if(i==j){
        tree[node] = v[i];
        return;
    }

    int left = 2*node;
    int right = 2*node+1;
    int mid = (i+j)/2;

    init(left, i, mid);
    init(right, mid+1, j);

    tree[node] = tree[left] + tree[right];
    return;
}

int query(int node, int i, int j, int val, int point){
    if(tree[node]==0)
        return 0;
    if(targetEnd<targetStart)
        return 0;

    if(i>targetEnd || j<targetStart)
        return 0;

    if(i>=targetStart && j<=targetEnd){
        int value = min(tree[node],val);
        tree[node] = max(0,tree[node]-val);
        return value;
    }

    int left = 2*node;
    int right = 2*node+1;
    int mid = (i+j)/2;

    int ret1 = query(left, i, mid, val, targetStart, targetEnd);
    int ret2 = query(right, mid+1, val, j, targetStart, targetEnd);

    return ret1+ret2;
}

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int t;

        for(int i=1; i<=n; i++){
            scanf("%d",&v[i]);
        }

        init(1,1,n);

        for(int i=1; i<=n; i++){
            scanf("%d",&t);
            int value = query(1,1,n,t,1,i);
            printf("%d\n",value);
            if(i==n)
                puts("");
            else
                printf(" ");
        }
    }

    return 0;
}
