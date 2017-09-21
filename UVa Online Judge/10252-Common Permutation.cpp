#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    while(getline(cin,s1) && getline(cin,s2)){
        if(s1.empty() || s2.empty()){
            cout<<endl;
            continue;
        }

        int rem[26]={};

        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        for(int i=0;i<s1.size();i++)
            rem[s1[i]-'a']++;

        for(int i=0;i<s2.size();i++)
            if(rem[s2[i]-'a']){
                cout<<s2[i];
                rem[s2[i]-'a']--;
            }

        cout<<endl;
    }
    return 0;
}
