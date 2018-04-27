#include <bits/stdc++.h>
using namespace std;

#define MAX 1000001

int valueOf[26] = {}, mx;
vector<pair<int, int> >crabbleList;

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

void knapsack(int root, int index, int value){
    if(data[root].endword){
        mx = max(mx, value);
    }

    if(index==crabbleList.size())
        return;
    int id = crabbleList[index].first;
    if(data[root].next[id]) knapsack(data[root].next[id], index+1, value + crabbleList[index].second);
    knapsack(root, index+1, value);

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
        sort(s.begin(), s.end());
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
            crabbleList.push_back(make_pair(ch-'a', value));
        }

        sort(crabbleList.begin(), crabbleList.end());

        mx = 0;
        knapsack(0, 0, 0);
        cout<<mx<<endl;

        crabbleList.clear();
    }

    return 0;
}
