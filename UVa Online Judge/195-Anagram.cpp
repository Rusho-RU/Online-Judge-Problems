#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
    char c1,c2;
    for(int i=0;i<a.size();i++){
        c1=a[i],c2=b[i];
        if(c1>='A' && c1<='Z') c1+=32;
        if(c2>='A' && c2<='Z') c2+=32;
        if(c1==c2)
            if(a[i]==b[i]) continue;
            else return a[i]<b[i];
        else return c1<c2;
    }
    return true;
}

int main(){
    int n;
    while(scanf("%d",&n)==1){
        string s[n],temp;
        int i;
        for(i=0;i<n;i++){
            cin>>s[i];
        }
        vector<string>v;

        for(i=0;i<n;i++){
            temp=s[i];
            v.push_back(s[i]);
            while(1){
                next_permutation(s[i].begin(), s[i].end());
                if(temp==s[i]) break;
                v.push_back(s[i]);
            }
            sort(v.begin(),v.end(),cmp);

            for(int j=0;j<v.size();j++)
                cout<<v[j]<<endl;
            v.clear();
        }
    }
    return 0;
}
