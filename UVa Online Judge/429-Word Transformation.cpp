#include <bits/stdc++.h>
using namespace std;

int main(){
    int c=0;
    vector<char>adj[26];
    string s;
    map<string,int>rem;
    map<int,string>num;

    while(cin>>s && s[0]!='*'){
        for(int i=1;i<s.size();i++)
            adj[s[i-1]-'a'].push_back(s[i]);
        rem[s]=c;
        num[c]=s;
        c++;
    }

    string source,target;
    cin>>source>>target;
    queue<string>q;
    q.push(source);
    map<string,int>dist;
    dist[source]=0;

    while(!q.empty()){
        int s=rem[q.front()];
        q.pop();

    }

}
