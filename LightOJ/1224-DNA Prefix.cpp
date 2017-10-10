#include <bits/stdc++.h>
using namespace std;

int ptr, ans;
#define MAX 1000001

int decide(char c){
    if(c=='A')
        return 0;
    if(c=='C')
        return 1;
    if(c=='G')
        return 2;
    return 3;
}

struct node{
    int next[4];
    int cnt;
    void Set(){
        for(int i=0; i<4; i++) next[i]=0;
        cnt=0;
    }
}data[MAX];

void Insert(string s){
    int address=0;
    for(int i=0;i<s.size();i++){
        int x=decide(s[i]);
        if(!data[address].next[x]){
            data[address].next[x]=ptr++;
            data[ptr-1].Set();
        }

        address=data[address].next[x];
        data[address].cnt+=i+1;
        ans=max(ans,data[address].cnt);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, Case=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        ptr=1, ans=-1;
        data[0].Set();

        for(int i=0;i<n;i++){
            cin>>s;
            Insert(s);
        }

        cout<<"Case "<<++Case<<": "<<ans<<endl;
    }
    return 0;
}

