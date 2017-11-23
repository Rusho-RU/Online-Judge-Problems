#include <bits/stdc++.h>
using namespace std;

#define MAX 26

vector<int>adj[MAX], top;
char data[MAX];
int inDegree[MAX], node, indexOf[MAX];
bool visited[MAX];

void reset(){
    node = 0;
    top.clear();
    for(int i=0; i<MAX; i++)
        adj[i].clear(), inDegree[i] = visited[i] = 0, indexOf[i] = -1;
}

bool allTopSort(){
    bool flag = false;

    for(int n=0; n<node; n++){
        if(inDegree[n]==0 && !visited[n]){
            for(int i=0; i<adj[n].size(); i++){
                int m = adj[n][i];
                inDegree[m]--;
            }

            top.push_back(n);
            visited[n] = true;
            if(!allTopSort())
                return false;
            visited[n] = false;
            top.erase(top.end()-1);

            for(int i=0; i<adj[n].size(); i++){
                int m = adj[n][i];
                inDegree[m]++;
            }

            flag = true;
        }
    }

    if(!flag){
        if(top.size()!=node)
            return false;
        printf("%c",data[top[0]]);

        for(int i=1; i<top.size(); i++)
            printf(" %c",data[top[i]]);
        puts("");
    }

    return true;
}

int main(){
    int t;
    scanf("%d",&t);
    getchar();

    while(t--){
        getchar();
        reset();
        char whiteSpace, a, b;
        priority_queue<char>pq;

        while(scanf("%c%c",&a,&whiteSpace)==2){
            pq.push(-a);

            if(whiteSpace == '\n')
                break;
        }

        while(!pq.empty()){
            char ch = -pq.top();
            pq.pop();

            if(indexOf[ch-'A'] == -1){
                data[node] = ch;
                indexOf[ch-'A'] = node++;
            }
        }

        while(scanf("%c<%c%c",&a,&b,&whiteSpace)==3){
            int u = indexOf[a - 'A'];
            int v = indexOf[b - 'A'];

            adj[u].push_back(v);
            inDegree[v]++;

            if(whiteSpace == '\n')
                break;
        }

        if(!allTopSort())
            puts("NO");
        if(t)
            puts("");
    }

    return 0;
}
