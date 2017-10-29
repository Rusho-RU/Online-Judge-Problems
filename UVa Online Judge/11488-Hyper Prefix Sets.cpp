#include <bits/stdc++.h>
using namespace std;

#define MAX 201*50001

int ptr, ans;

struct node{
    int next[2], visited;
    void Set(){
        next[0] = next[1] = visited = 0;
    }
}data[MAX];

void init(const string& s){
    int address = 0;

    for(int i=0; i<s.size(); i++){
        int x = s[i] - '0';
        if(!data[address].next[x]){
            data[address].next[x] = ptr++;
            data[ptr-1].Set();
        }
        address = data[address].next[x];
        data[address].visited+=i+1;
        ans = max(ans, data[address].visited);
    }

    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        ptr = 1;
        data[0].Set();
        ans = -1;

        while(n--){
            string s;
            cin>>s;
            init(s);
        }

        cout<<ans<<endl;
    }

    return 0;
}
