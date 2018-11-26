#include <bits/stdc++.h>
using namespace std;

#define MAX 500050
#define setbitcount __builtin_popcount

int tree[4*MAX];

void update(int node, int i, int j, int target, int type){
    if(i>target || j<target)
        return;
    if(i==j && i==target){
        tree[node] = type==1 ? tree[node]+1 : max(tree[node]-1, 0);
        return;
    }

    int left = 2*node;
    int right = 2*node+1;
    int mid = (i+j)/2;

    update(left, i, mid, target, type);
    update(right, mid+1, j, target, type);

    tree[node] = tree[left] + tree[right];

    return;
}

int query(int node, int i, int j, int targetStart, int targetEnd){
    if(i>targetEnd || j<targetStart)
        return 0;

    if(i>=targetStart && j<=targetEnd)
        return tree[node];

    int left = 2*node;
    int right = 2*node+1;
    int mid = (i+j)/2;

    int ret1 = query(left, i, mid, targetStart, targetEnd);
    int ret2 = query(right, mid+1, j, targetStart, targetEnd);

    return ret1 + ret2;
}

int main(){
    int n, q;
    scanf("%d%d",&n,&q);

    while(q--){
        int type, x, y;

        scanf("%d %d",&type, &x);

        if(type==3){
            scanf("%d",&y);
            int ans = query(1, 1, n, x, y);
            printf("%d\n",ans);
        }

        else
            update(1, 1, n, x, type);
    }

    return 0;
}
