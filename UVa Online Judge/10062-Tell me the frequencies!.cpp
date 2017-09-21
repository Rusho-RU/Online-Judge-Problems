#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int>& a, const pair<int,int>& b){
    if(a.second==b.second)
        return a.first>b.first;
    return a.second<b.second;
}

int main(){
    string s;
    int t=0;

    while(getline(cin,s)){
        int ara[97]={};
        bool achhe[97]={};

        if(t++) printf("\n");

        for(int i=0;i<s.size();i++){
            if(s[i]>=32 && s[i]<128)
                ara[s[i]-32]++, achhe[s[i]-32]=true;
        }

        vector< pair<int,int> >v;

        for(int i=0;i<97;i++)
            if(achhe[i]) v.push_back(make_pair(i+32,ara[i]));

        sort(v.begin(),v.end(),cmp);

        for(int i=0;i<v.size();i++)
            printf("%d %d\n",v[i].first,v[i].second);
    }
    return 0;
}
