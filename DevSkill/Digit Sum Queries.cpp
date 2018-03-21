#include <bits/stdc++.h>
using namespace std;

#define MAX 100050

int data[MAX], tree[4*MAX], Index[4*MAX];
int ind;

int SOD(int n){
    int ans=0;

    while(n){
        ans+=n%10;
        n/=10;
    }
    return ans;
}

void init(int node, int i, int j){
    if(i==j){
        tree[node] = SOD(data[i]);
        Index[node] = i;
        return;
    }

    int left = 2*node;
    int right = 2*node+1;
    int mid = (i+j)/2;

    init(left, i, mid);
    init(right, mid+1, j);

    tree[node] = max(tree[left], tree[right]);
    if(tree[right] > tree[left])
        Index[node] = Index[right];
    else
        Index[node] = Index[left];

    return;
}

pair<int, int> query(int node, int i, int j, int targetStart, int targetEnd){
    if(i>targetEnd || j<targetStart)
        return make_pair(INT_MIN,-1);
    if(i>=targetStart && j<=targetEnd)
        return make_pair(tree[node], Index[node]);

    int left = 2*node;
    int right = 2*node+1;
    int mid = (i+j)/2;

    pair<int, int> ret1 = query(left,i,mid,targetStart,targetEnd);
    pair<int, int> ret2 = query(right,mid+1,j,targetStart,targetEnd);

    if(ret1.first < ret2.first)
        return ret2;
    else
        return ret1;
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

        printf("Case #%d:\n",++Case);

        for(int i=0;i<q;i++){
            int from,to;
            scanf("%d%d",&from,&to);
            pair<int, int> ans = query(1,1,n,from,to);
            printf("%d %d\n",ans.first,ans.second);
        }
    }

    return 0;
}
