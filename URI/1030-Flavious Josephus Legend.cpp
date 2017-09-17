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

int Find(int s){
    node *temp=start;

    while(temp!=temp->next){
        for(int i=2;i<s;i++)
            temp=temp->next;
        temp->next=temp->next->next;
        temp=temp->next;
    }

    return temp->pos;
}

int main(){
    int t,Case=0;
    scanf("%d",&t);

    while(t--){
        int n,k;
        scanf("%d%d",&n,&k);
        take(n);
        int ans;
        if(k==1) ans=n;
        else ans=Find(k);
        printf("Case %d: %d\n",++Case,ans);
    }
    return 0;
}
