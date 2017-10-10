#include <bits/stdc++.h>
using namespace std;

bool consistent;

struct node{
    node* next[10]={NULL};
    bool endword = false;
};

node* head;

void init(string s){
    node* address=head;
    for(int i=0;i<s.size();i++){
        int x=s[i]-'0';
        if(!address->next[x]){
            address->next[x] = new node;
        }

        else if(address->next[x]->endword || i==s.size()-1){
            consistent=false;
            return;
        }
        address=address->next[x];
    }

    address->endword=true;
}

void vanish(node* current){
    for(int i=0; i<10; i++){
        if(current->next[i])
            vanish(current->next[i]);
    }

    delete current;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, Case=0;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;

        consistent = true;
        head = new node;

        while(n--){
            cin>>s;
            if(consistent)
                init(s);
        }

        cout<<"Case "<<++Case<<": ";

        if(consistent)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        vanish(head);
    }

    return 0;
}
