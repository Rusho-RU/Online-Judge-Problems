#include <bits/stdc++.h>
using namespace std;

#define MAX 100002
#define INF 0x3f3f3f3f

int data[MAX], tree[3*MAX];

void init(int node, int i, int j){
    if(i==j){
        tree[node] = data[j];
        return;
    }

    int left = 2*node;
    int right = 2*node+1;
    int mid = (i+j)/2;

    init(left, i, mid);
    init(right, mid+1, j);

    tree[node] = min(tree[left], tree[right]);
    return;
}

int query(int node, int i, int j, int targetStart, int targetEnd){
    if(i>targetEnd || j<targetStart)
        return INF;
    if(i>=targetStart && j<=targetEnd)
        return tree[node];

    int left = 2*node;
    int right = 2*node+1;
    int mid = (i+j)/2;

    int ret1 = query(left,i,mid,targetStart,targetEnd);
    int ret2 = query(right,mid+1,j,targetStart,targetEnd);

    return min(ret1, ret2);
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n,q;
        scanf("%d %d",&n,&q);

        for(int i=1;i<=n;i++)
            scanf("%d",&data[i]);

        init(1,1,n);

        printf("Case %d:\n",++Case);

        for(int i=0;i<q;i++){
            int from,to;
            scanf("%d%d",&from,&to);
            int ans = query(1,1,n,from,to);
            printf("%d\n",ans);
        }
    }

    return 0;
}

