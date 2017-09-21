#include <bits/stdc++.h>
using namespace std;

struct type{
    int value;
    type *left=NULL,*right=NULL;
};

type *HEAD=new type;

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

void postorder_traverse(){
    type *temp=node.top();
    if(!temp){
        node.pop();
        return;
    }

    node.push(temp->left);
    postorder_traverse();
    node.push(temp->right);
    postorder_traverse();
    printf("%d\n",temp->value);
    node.pop();
    return;
}

int main(){
    int value;
    scanf("%d",&HEAD->value);
    while(scanf("%d",&value)==1){
        Insert(value);
    }
    node.push(HEAD);
    postorder_traverse();
    return 0;
}
