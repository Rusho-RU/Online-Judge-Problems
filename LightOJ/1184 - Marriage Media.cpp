#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAXP 55

struct Person{
    int height, age, status;
    Person(){}
}man[MAXP], woman[MAXP];

vector<int>preference[MAXP];
bool visited[MAXP];
int matching[MAXP];

bool dfs(int u){
    if(visited[u])
        return false;

    visited[u] = true;

    for(int v : preference[u]){
        if(matching[v]==-1 || dfs(matching[v])){
            matching[v] = u;
            return true;
        }
    }

    return false;
}

int kuhn(int m){
    int ans = 0;

    memset(matching, -1, sizeof matching);

    for(int i=0; i<m; i++){
        memset(visited, false, sizeof visited);
        ans+=dfs(i);
    }

    return ans;
}

bool match(int i, int j){
    if(abs(man[i].height-woman[j].height)>12)
        return false;
    if(abs(man[i].age - woman[j].age)>5)
        return false;

    return !(man[i].status^woman[j].status);
}

void reset(int n){
    for(int i=0; i<n; i++)
        preference[i].clear();
}

int main(){
    FasterIO;

    int t, Case=0;
    cin>>t;

    while(t--){
        int m, w;
        cin>>m>>w;

        reset(m);

        for(int i=0; i<m; i++)
            cin>>man[i].height>>man[i].age>>man[i].status;

        for(int i=0; i<w; i++)
            cin>>woman[i].height>>woman[i].age>>woman[i].status;

        for(int i=0; i<m; i++){
            for(int j=0; j<w; j++){
                if(match(i, j))
                    preference[i].push_back(j);
            }
        }

        int maxMatch = kuhn(m);

        cout<<"Case "<<++Case<<": "<<maxMatch<<"\n";
    }

    return 0;
}
