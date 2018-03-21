#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;

    while(getline(cin,s)){
        vector<string>str;

        for(int i=1; i<s.size()-1; i++){
            string st;
            while(i<s.size()-1 && s[i]!=' ')
                st+=s[i++];
            if(!st.empty())
                str.push_back(st);
        }

        string ans;
        ans+='"';

        for(int i=0; i<str.size(); i++){
            if(i%2)
                ans+=str[i][0];
            else
                ans+=str[i][str[i].size()-1];
        }

        ans+='"';

        cout<<ans<<endl;
    }
}
