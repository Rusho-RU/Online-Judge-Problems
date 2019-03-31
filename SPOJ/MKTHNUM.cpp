#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(v) v.begin(),v.end()
#define MAX 100010

int data[MAX];
vector<int>tree[4*MAX];

void build_merge_tree(int node, int i, int j){
    if(i==j){
        tree[node].push_back(data[i]);
        return;
    }

    int left = 2*node;
    int right = 2*node+1;
    int mid = (i+j)/2;

    build_merge_tree(left, i, mid);
    build_merge_tree(right, mid+1, j);

    merge(all(tree[left]), all(tree[right]), back_inserter(tree[node]));

    return;
}

int query(int node, int i, int j, int l, int r, int value){
    if(l>j || r<i)
        return 0;

    if(i>=l && j<=r)
        return upper_bound(all(tree[node]), value) - tree[node].begin();

    int left = 2*node;
    int right = 2*node+1;
    int mid = (i+j)>>1;

    return query(left, i, mid, l, r, value) + query(right, mid+1, j, l, r, value);
}

void main_query(int n, int l, int r, int k, int* ans){
    int lo = 0, hi = n-1, mid;

    while(lo<=hi){
        mid = (lo+hi)>>1;

        int num = query(1, 1, n, l, r, tree[1][mid]);

        if(num>=k){
            *ans = tree[1][mid];
            hi = mid-1;
        }
        else
            lo = mid+1;
    }

    return;
}

int main(){
    FasterIO;

    int n, q;

    cin>>n>>q;
    for(int i=1; i<=n; i++)
        cin>>data[i];

    build_merge_tree(1, 1, n);

    sort(data+1, data+n+1);

    while(q--){
        int l, r, k;
        cin>>l>>r>>k;
        int ans = -1;

        main_query(n, l, r, k, &ans);
        cout<<ans<<endl;
    }

    return 0;
}
