#include <bits/stdc++.h>
using namespace std;

bool possible;
int ptr;
#define MAX 1000001

struct node{
    int next[10];
    bool endword;
    void Set(){
        memset(next,0,sizeof next);
        endword=false;
    }
}data[MAX];

void Insert(string s){
    int address=0;
    for(int i=0;i<s.size();i++){
        int x=s[i]-'0';
        if(!data[address].next[x]){
            data[address].next[x]=ptr++;
            data[ptr-1].Set();
        }

        else if(data[data[address].next[x]].endword || i==s.size()-1){
            possible=false;
            return;
        }
        address=data[address].next[x];
    }

    data[address].endword=true;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        possible=true;
        ptr=1;
        data[0].Set();

        for(int i=0;i<n;i++){
            cin>>s;
            if(possible) Insert(s);
        }

        if(possible) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

