#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<string,int>& a, const pair<string,int>& b){
    if(a.first.size()==b.first.size())
        return a.second<b.second;
    return a.first.size()>b.first.size();
}

int main(){
    int n;
    cin>>n;
    char c;
    vector< pair<string,int> >v[n];
    getchar();
    for(int i=0;i<n;i++){
        string s;

        while(1){
            while(scanf("%c",&c) && c!=' ' && c!='\n')
                s+=c;
            if(!s.empty())
                v[i].push_back(make_pair(s,v[i].size()));
            if(c=='\n')
                break;
            s.clear();
        }

        sort(v[i].begin(),v[i].end(),cmp);
        cout<<v[i][0].first;
        for(int j=1;j<v[i].size();j++)
            cout<<' '<<v[i][j].first;
        cout<<endl;
    }
    return 0;
}
