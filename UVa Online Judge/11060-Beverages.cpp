#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, Case=0;

    while(cin>>n){
        string beverage[n];
        int inDegree[n];
        memset(inDegree, 0, sizeof inDegree);
        vector<int>adj[n];
        map<string, int>indexOf;

        for(int i=0; i<n; i++){
            cin>>beverage[i];
            indexOf[beverage[i]] = i;
        }

        int m;
        cin>>m;

        for(int i=0; i<m; i++){
            string s1,s2;
            cin>>s1>>s2;
            int u = indexOf[s1];
            int v = indexOf[s2];

            adj[u].push_back(v);

            inDegree[v]++;
        }

        priority_queue<int>q;
        vector<int>order;

        for(int i=0; i<n; i++){
            if(inDegree[i]==0)
                q.push(-i);
        }

        while(!q.empty()){
            int domino = -q.top();
            q.pop();

            order.push_back(domino);

            for(int i=0; i<adj[domino].size(); i++){
                int x = adj[domino][i];
                if(--inDegree[x] == 0)
                    q.push(-x);
            }
        }

        cout<<"Case #"<<++Case<<": Dilbert should drink beverages in this order:";

        for(int i=0; i<order.size(); i++){
            int indx = order[i];
            cout<<" "<<beverage[indx];
        }

        cout<<"."<<endl<<endl;
    }

    return 0;
}
