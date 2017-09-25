#include <bits/stdc++.h>
using namespace std;

#define MAX 100
#define INF 0x3f3f3f3f

int data[MAX], tree[4*MAX], leftFreq[4*MAX], rightFreq[4*MAX], leftVal[4*MAX], rightVal[4*MAX];

void init(int node, int i, int j){
    printf("%d\n",node);
    if(i==j){
        tree[node] = data[i];
        leftFreq[node] = rightFreq[node] = 1;
        return;
    }

    int left = 2*node;
    int right = left+1;
    int mid = (i+j)/2;

    init(left, i, mid);
    init(right, mid+1, j);

    int val;

    if(data[mid]==data[mid+1])
        val = leftFreq[right] + rightFreq[left];
    else
        val=-1;

    tree[node] = max(val, max(tree[left], tree[right]));

    int cnt=leftFreq[left];

    for(int k=cnt+1; k<=j; k++){
        if(data[k] == data[i])
            cnt++;
    }

    leftFreq[node] = cnt;

    cnt = rightFreq[right];

    for(int k=cnt+1; k>=i; k--){
        if(data[k] == data[j])
            cnt++;
    }

    rightFreq[node] = cnt;

    return;
}

int query(int node, int i, int j, int targetStart, int targetEnd){
    if(i>targetEnd || j<targetStart)
        return -INF;

    if(i>=targetStart && j<=targetEnd)
        return tree[node];

    int left = 2*node;
    int right = left+1;
    int mid = (i+j)/2;

    int ret1 = query(left, i, mid, targetStart, targetEnd);
    int ret2 = query(right, mid+1, j, targetStart, targetEnd);

    return max(ret1,ret2);
}

int main(){
    int n,q;

    while(scanf("%d",&n) && n){
        scanf("%d %d",&q,&kept[1]);
        data[1]=1;

        for(int i=2, pointer=1; i<=n; i++){
            scanf("%d",&kept[i]);
            if(kept[i]==kept[i-1])
                data[i] = ++pointer;
            else
                data[i] = pointer = 1;
        }

        init(1,1,n);

        for(int i=0;i<q;i++){
            int from,to;
            scanf("%d%d",&from,&to);
            int ans = query(1,1,n,from,to);
            printf("%d\n",ans);
        }
    }

    return 0;
}
