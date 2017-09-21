#include <bits/stdc++.h>
using namespace std;

bool possible;

struct node{
    int Count=0;
    bool endword=false;
    node* next[10]={NULL};
};

node* head;

int Insert(string s){
    node* address=head;
    for(int i=0;i<s.size();i++){
        int x=s[i]-'0';
        if(!address->next[x])
            address->next[x]=new node;
        address=address->next[x];
        address->Count++;
        if(address->Count>1 && address->endword) possible=false;
    }
    address->endword=true;
    if(address->Count>1) possible=false;
}

void del(node *address){
    for(int i=0;i<10;i++){
        if(address->next[i])
            del(address->next[i]);
    }
    delete address;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        head=new node;
        cin>>n;
        string s;
        possible=true;

        for(int i=0;i<n;i++){
            cin>>s;
            if(possible) Insert(s);
        }

        if(possible) cout<<"YES\n";
        else cout<<"NO\n";
        //del(head);
    }
    return 0;
}

