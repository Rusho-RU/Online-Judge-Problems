#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        string s;
        cin>>s;

        bool isFound[26];
        int Count[26];
        memset(isFound, false, sizeof isFound);
        memset(Count, 0, sizeof Count);
        vector<int>v;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='*')
                v.push_back(i);
            else
                isFound[s[i]-'a'] = true;
        }

        int m;
        vector<string>str;
        set<char>A;

        for(int i=0; i<m; i++){
            string s;
            cin>>s;
            int i;

            for(i=0; i<s.size(); i++){
                int pos = v[i];
                if(isFound[s[pos]-'a'])
                    break;
            }

            if(i==s.size()){
                for(i=0; i<s.size(); i++){
                    int pos = v[i];
                    Count[s[pos]]++;
                }
            }
        }


    }
}
