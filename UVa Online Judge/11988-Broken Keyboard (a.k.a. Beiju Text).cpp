#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    FasterIO;
    string word;
    while(getline(cin,word)){
        string s;
        deque<string>d;
        char c='b';

        for(int i=0;i<word.size();i++){
            if(word[i]=='[' || word[i]==']'){
                if(!s.empty()){
                    if(c=='b') d.push_back(s);
                    else d.push_front(s);
                }
                s.clear();
                if(word[i]=='[') c='f';
                else c='b';
            }

            else s+=word[i];
        }

        if(!s.empty())
            if(c=='f') d.push_front(s);
            else d.push_back(s);

        while(!d.empty()){
            cout<<d.front();
            d.pop_front();
        }
        cout<<endl;
    }
    return 0;
}
