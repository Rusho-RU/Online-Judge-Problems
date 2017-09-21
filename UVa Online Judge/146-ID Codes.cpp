#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(1){
        getline(cin,s);
        priority_queue<string>p;
        do{
            p.push(s);
        } while(next_permutation(s.begin(),s.end()));
        cout<<p.top()<<endl;
    }
}
