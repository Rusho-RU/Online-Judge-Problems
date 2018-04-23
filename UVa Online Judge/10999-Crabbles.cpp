#include <bits/stdc++.h>
using namespace std;

#define MAX 10000001

int valueOf[26] = {}, mx;

struct node{
    int next[26];
    bool endword;

    node(){
        memset(next, 0, sizeof next);
        endword = false;
    }
};

vector<node>data;

void init(const string& s){
    int now = 0;

    for(int i=0; i<s.size(); i++){
        int x = s[i] - 'a';

        if(!data[now].next[x]){
            data[now].next[x] = data.size();
            data.push_back(node());
        }

        now = data[now].next[x];
    }

    data[now].endword = true;

    return;
}

void traverse(int now, int value){
    if(data[now].endword){
        mx = max(mx, value);
        return;
    }

    for(int i=0; i<26; i++){
        if(data[now].next[i] && valueOf[i]){
            traverse(data[now].next[i], value + valueOf[i]);
        }
    }

    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int words;
    cin>>words;
    string s;

    data.push_back(node());

    while(words--){
        cin>>s;
        init(s);
    }

    int hands;
    cin>>hands;

    while(hands--){
        int crabbles;
        cin>>crabbles;
        char ch;
        int value;

        memset(valueOf, 0, sizeof valueOf);

        while(crabbles--){
            cin>>ch>>value;
            int id = ch-'a';
            valueOf[id] = max(valueOf[id], value);
        }

        mx = 0;
        traverse(0,0);
        cout<<mx<<endl;
    }

    return 0;
}
