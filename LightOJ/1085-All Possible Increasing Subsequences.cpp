#include <bits/stdc++.h>
using namespace std;

#define MAX 100001
#define MOD 1000000007

long long tree[4*MAX];

void init(int node, int i, int j){
    tree[node] = 0;

    if(i==j)
        return;
    int left = 2*node;
    int right = 2*node+1;
    int mid = (i+j)/2;

    init(left, i, mid);
    init(right, mid+1, j);
    return;
}

long long query(int node, int i, int j, int targetStart, int targetEnd){
    if(targetEnd<targetStart)
        return 0;

    if(i>targetEnd || j<targetStart)
        return 0;
    if(i>=targetStart && j<=targetEnd)
        return tree[node];

    int left = 2*node;
    int right = 2*node+1;
    int mid = (i+j)/2;

    long long ret1 = query(left, i, mid, targetStart, targetEnd);
    long long ret2 = query(right, mid+1, j, targetStart, targetEnd);

    return (ret1+ret2) % MOD;
}

void update(int node, int i, int j, int point, long long val){
    if(i>point || j<point)
        return;
    if(i==point && j==point){
        tree[node]=(tree[node]+val) % MOD;
        return;
    }

    int left = 2*node;
    int right = 2*node+1;
    int mid = (i+j)/2;

    update(left, i, mid, point, val);
    update(right, mid+1, j, point, val);

    tree[node] = (tree[left] + tree[right]) % MOD;
    return;
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int data[n+1], sorted[n+1];
        map<int, int>pos;

        for(int i=1; i<=n; i++){
            scanf("%d",&data[i]);
            sorted[i] = data[i];
        }

        init(1,1,n);

        sort(sorted+1, sorted+n+1);

        for(int i=1; i<=n; i++)
            pos[sorted[i]] = i;

        for(int i=1; i<=n; i++){
            int position = pos[data[i]];
            long long total = query(1, 1, n, 1, position-1);
            update(1, 1, n, position, total+1);
        }

        printf("Case %d: %lld\n",++Case, tree[1]);
    }

    return 0;
}
