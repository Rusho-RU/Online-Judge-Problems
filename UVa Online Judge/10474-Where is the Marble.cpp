#include <bits/stdc++.h>
using namespace std;

struct type{
    int value;
    type *left=NULL,*right=NULL;
};

type *HEAD;
vector<int>data;

void Insert(int n){
    type *temp=HEAD;
    while(1){
        if(n>temp->value){
            if(!temp->right){
                temp->right=new type;
                temp->right->value=n;
                return;
            }
            else temp=temp->right;
        }

        else{
            if(!temp->left){
                temp->left=new type;
                temp->left->value=n;
                return;
            }
            else temp=temp->left;
        }
    }
}

stack<type*>node;

void inorder_traverse(){
    type *temp=node.top();
    if(!temp){
        node.pop();
        return;
    }

    data.push_back(temp->value);
    node.pop();
    node.push(temp->left);
    inorder_traverse();
    node.push(temp->right);
    inorder_traverse();
    return;
}

int main(){
    int n,q,Case=0;
    while(scanf("%d %d",&n,&q), n || q){
        HEAD=new type;
        int memory[10001]={};
        int value;
        scanf("%d",&HEAD->value);
        for(int i=1;i<n;i++){
            scanf("%d",&value);
            Insert(value);
        }
        node.push(HEAD);
        inorder_traverse();

        for(int i=0;i<n;i++)
            if(!memory[data[i]]) memory[data[i]]=i+1;

        printf("CASE# %d:\n",++Case);

        for(int i=0;i<q;i++){
            int query;
            scanf("%d",&query);
            if(memory[query]) printf("%d found at %d\n",query,memory[query]);
            else printf("%d not found\n",query);
        }
        data.clear();
    }
    return 0;
}
