#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool cmp(const pair<string, int>& a, const pair<string, int>& b){
    return a.first.size() < b.first.size();
}

int n;
pair<string, int> s[250];

bool prefix(const string& str, const string& s){
    for(int i=0; i<s.size(); i++)
        if(str[i]!=s[i])
            return false;
    return true;
}

bool suffix(const string& str, const string& s){
    for(int i=s.size()-1, j=str.size()-1; i>=0; i--, j--)
        if(str[j]!=s[i])
            return false;
    return true;
}

bool check(const string& str){
    for(int i=0; i<2*n-2; i+=2)
        if(!(prefix(str, s[i].first) && suffix(str, s[i+1].first)) && !(suffix(str, s[i].first) && prefix(str, s[i+1].first)))
            return false;
    return true;
}

string vai_kore_de(){
    string str = s[2*n-3].first + s[0].first;
    if(check(str)){
        return str;
    }

    str = s[2*n-3].first + s[1].first;
    if(check(str)){
        return str;
    }

    str = s[2*n-4].first + s[0].first;
    if(check(str)){
        return str;
    }

    str = s[2*n-4].first + s[1].first;
    if(check(str)){
        return str;
    }
}

int main(){
    FasterIO;

    cin>>n;

    for(int i=0, j=0; i<2*n-2; i++){
        cin>>s[i].first;
        s[i].second = i;
    }

    string ans(2*n-2, 0);
    sort(s, s+2*n-2, cmp);

    string str = vai_kore_de();

    for(int i=0; i<2*n-2; i+=2){
        if(prefix(str, s[i].first))
            ans[s[i].second] = 'P', ans[s[i+1].second] = 'S';
        else
            ans[s[i].second] = 'S', ans[s[i+1].second] = 'P';
    }

    cout<<ans<<endl;

    return 0;
}

