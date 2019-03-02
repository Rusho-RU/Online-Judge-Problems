#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAX 30

int parent[MAX];

void reset(int n){
    for(int i=0; i<n; i++)
        parent[i] = i;
}

int Find(int x){
    if(parent[x]==x)
        return x;
    return parent[x] = Find(parent[x]);
}

bool Union(int x, int y){
    int u = Find(x), v = Find(y);
    if(u!=v){
        parent[u] = v;
        return true;
    }

    return false;
}

int main(){
    FasterIO;

    int t;

    cin>>t;
    cin.ignore();
    cin.ignore();

    while(t--){
        char ch;

        cin>>ch;
        cin.ignore();

        int n = ch-'A'+1;

        reset(n);

        string s;

        while(getline(cin, s) && !s.empty()){
            int u=s[0]-'A', v=s[1]-'A';
            if(Union(u, v)){
                n--;
            }
        }

        cout<<n<<"\n";

        if(t)
            cout<<"\n";
    }

    return 0;
}
