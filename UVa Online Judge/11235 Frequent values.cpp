#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

#define MAX 100010

int data[MAX];
int tree[4*MAX];

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

    if(data[mid]==data[mid+1])
        tree[node] =
}

int main(){
    FasterIO;

    int n, q;

    while(cin>>n && n){
        cin>>q;


    }

    return 0;
}

