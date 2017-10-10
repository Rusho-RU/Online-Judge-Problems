#include <bits/stdc++.h>
using namespace std;

bool data[100002];
int tree[4*100002], targetStart, targetEnd;

void update(int node, int i, int j){
    if(i>targetEnd || j<targetStart)
        return;
    if(i>=targetStart && j<=targetEnd){
        tree[node]++;
        return;
    }

    int left = 2*node;
    int right = 2*node + 1;
    int mid = (i+j)/2;

    update(left, i, mid);
    update(right, mid+1, j);

    return;
}

int query(int node, int i, int j, int indx, int carry){
    if(i>indx || j<indx)
        return -1;

    if(i==j){
        carry+=tree[node];
        if(carry%2)
            return !data[i];
        else
            return data[i];
    }

    int left = 2*node;
    int right = 2*node + 1;
    int mid = (i+j)/2;

    int ret1 = query(left, i, mid, indx, carry+tree[node]);
    int ret2 = query(right, mid+1, j, indx, carry+tree[node]);

    if(ret1!=-1)
        return ret1;
    else
        return ret2;
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        memset(tree, 0, sizeof tree);
        char c;
        int indx=1;
        getchar();

        while(scanf("%c",&c) && c!='\n'){
            if(c=='0')
                data[indx++] = false;
            else
                data[indx++] = true;
        }

        int q;
        scanf("%d",&q);
        printf("Case %d:\n",++Case);

        while(q--){
            char c;
            scanf(" %c",&c);

            if(c=='I'){
                scanf("%d %d",&targetStart,&targetEnd);
                update(1,1,indx);
            }

            else{
                int val;
                scanf("%d",&val);
                int ans = query(1,1,indx,val,0);
                printf("%d\n",ans);
            }
        }
    }

    return 0;
}
