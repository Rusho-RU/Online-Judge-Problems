#include <bits/stdc++.h>
using namespace std;

struct node{
    int pos;
    node *next=NULL;
};

node *start;

void take(int n){
    start=new node;
    node *temp=start;
    for(int i=2;i<n;i++){
        temp->pos=i;
        temp->next=new node;
        temp=temp->next;
    }
    temp->pos=n;
    temp->next=start;
    return;
}

int survived(int k){
    node *temp=start,*hold;

    while(temp!=temp->next){
        for(int i=2;i<k;i++)
            temp=temp->next;
        temp->next=temp->next->next;
        temp=temp->next;
    }
    return temp->pos;
}

int main(){
    int n;
    while(scanf("%d",&n) && n){
        int i=2, found=n;
        while(found!=13){
            take(n);
            found=survived(i++);
        }
        printf("%d\n",i-1);
    }
    return 0;
}

