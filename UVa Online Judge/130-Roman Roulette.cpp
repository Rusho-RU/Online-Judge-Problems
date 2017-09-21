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
    for(int i=1;i<n;i++){
        temp->pos=i;
        temp->next=new node;
        temp=temp->next;
    }
    temp->pos=n;
    temp->next=start;
    return;
}

int Find(int s, int n, int k){
    node *temp=start,*hold;
    int count=0;
    while(temp->pos!=s)
        temp=temp->next;

    while(temp!=temp->next){
        for(int i=1;i<k;i++)
            temp=temp->next;
        hold=temp;
        for(int i=1;i<k;i++){
            temp=temp->next;
            if(temp->next==hold)
                temp=temp->next;
        }

        hold->pos=temp->next->pos;
        temp->next=temp->next->next;
        temp=hold->next;
    }
    return temp->pos;
}

int main(){
    int n,k,i;
    while(scanf("%d%d",&n,&k) && n+k){
        for(i=1;i<=n;i++){
            take(n);
            int survived=Find(i,n,k);
            if(survived==1) break;
        }
        printf("%d\n",i);
    }
}
