#include <bits/stdc++.h>
using namespace std;

#define MAX 100003

int data[MAX], tree[4*MAX], given;

void init(int node, int i, int j){
    if(i==j){
        tree[node] = data[i];
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

void update(int node, int i, int j, int target, int val){
    if(i>target || j<target)
        return;
    if(i==target && j==target){
        if(val==-1)
            given = tree[node], tree[node] = 0;
        else
            tree[node] += val;
        return;
    }

    int left = 2*node;
    int right = 2*node+1;
    int mid = (i+j)/2;

    update(left, i, mid, target, val);
    update(right, mid+1, j, target, val);

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
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n,q;
        scanf("%d%d",&n,&q);

        for(int i=1;i<=n;i++){
            scanf("%d",&data[i]);
        }

        init(1,1,n);
        printf("Case %d:\n",++Case);

        while(q--){
            int id;
            scanf("%d",&id);

            if(id==3){
                int i, j;
                scanf("%d%d",&i,&j);
                int ans = query(1,1,n,i+1,j+1);
                printf("%d\n",ans);
            }

            else{
                int i;
                scanf("%d",&i);
                int val = -1;
                if(id==2)
                    scanf("%d",&val);
                update(1,1,n,i+1,val);

                if(id==1)
                    printf("%d\n",given);
            }
        }
    }

    return 0;
}
