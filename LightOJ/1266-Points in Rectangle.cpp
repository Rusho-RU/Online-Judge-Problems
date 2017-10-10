#include <bits/stdc++.h>
using namespace std;

#define MAX 1005

int tree[4*MAX][4*MAX], n;

void initY(int nodeX, int lx, int rx, int nodeY, int ly, int ry){
    if(ly==ry){
        if(lx==rx)
            tree[nodeX][nodeY] = 0;
        else
            tree[nodeX][nodeY] = tree[2*nodeX][ly] + tree[2*nodeX+1][ry];
        return;
    }

    int left = 2*nodeY;
    int right = 2*nodeY+1;
    int mid = (ly+ry)/2;

    initY(nodeX, lx, rx, left, ly, mid);
    initY(nodeX, lx, rx, right, mid+1, ry);

    return;
}

void initX(int node, int lx, int rx){
    if(lx!=rx){
        int left = 2*node;
        int right = 2*node+1;
        int mid = (lx+rx)/2;
        initX(left, lx, mid);
        initX(right, mid+1, rx);
    }

    initY(node, lx, rx, 1, 1, n);
}

int queryY(int nodeX, int nodeY, int ly, int ry, int tly, int try_){
    if(ly>try_ || ry<tly)
        return 0;
    if(ly>=tly && ry<=try_)
        return tree[nodeX][nodeY];

    int left = 2*nodeY;
    int right = 2*nodeY + 1;
    int mid = (ly+ry)/2;

    int ret1 = queryY(nodeX, left, ly, mid, tly, try_);
    int ret2 = queryY(nodeX, right, mid+1, ry, tly, try_);

    return ret1+ret2;
}

int queryX(int node, int lx, int rx, int tlx, int tly, int trx, int try_){
    if(lx>trx || rx<tlx)
        return 0;
    if(lx>=tlx && rx<=trx){
        return queryY(node, 1, 1, n, tly, try_);
    }

    int left = 2*node;
    int right = 2*node + 1;
    int mid = (lx+rx)/2;

    int ret1 = queryX(left, lx, mid, tlx, tly, trx, try_);
    int ret2 = queryX(right, mid+1, rx, tlx, tly, trx, try_);

    return ret1 + ret2;
}

void updateY(int nodeX, int nodeY, int ly, int ry, int y, int val){
    if(ly>y || ry<y)
        return;
    if(ly==y && ry==y){
        tree[nodeX][nodeY] = val;
        printf("%d %d\n",nodeX, nodeY);
        return;
    }

    int left = 2*nodeY;
    int right = 2*nodeY + 1;
    int mid = (ly+ry)/2;

    updateY(nodeX, left, ly, mid, y, val);
    updateY(nodeX, right, mid+1, ry, y, val);

    tree[nodeX][nodeY] = tree[nodeX][left] + tree[nodeX][right];

    return;
}

void updateX(int node, int lx, int rx, int x, int y, int val){
    if(lx>x || rx<x)
        return;
    if(lx==x && rx==x){
        updateY(node, 1, 1, n, y, val);
        return;
    }

    int left = 2*node;
    int right = 2*node + 1;
    int mid = (lx+rx)/2;

    updateX(left, lx, mid, x, y, val);
    updateX(right, mid+1, rx, x, y, val);

    return;
}

int main(){
    int t, Case=0;
    scanf("%d",&t);
    n=1001;

    while(t--){
        int q;
        scanf("%d",&q);

        while(q--){
            memset(tree, 0, sizeof tree);
            int id,lx,ly,rx,ry;
            scanf("%d %d %d", &id, &lx, &ly);
            lx++, ly++;

            if(id==0){
                updateX(1, 1, n, lx, ly, 1);
            }

            else{
                scanf("%d %d",&rx, &ry);
                rx++, ry++;
                int ans = queryX(1, 1, 1000, lx, ly, rx, ry);
                printf("%d\n",ans);
            }
        }
    }

    return 0;
}
