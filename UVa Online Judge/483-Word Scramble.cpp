#include <bits/stdc++.h>
using namespace std;

vector <int> FindLoc(string s, char c){
    vector<int>temp;
    temp.push_back(-1);
    for(int i=0;i<s.length();i++)
        if(s[i]==c)
            temp.push_back(i);
    temp.push_back(s.length());
    return temp;
}

int main(){
    string s;
    while(getline(cin,s)){
        int i,j;
        vector<int>v=FindLoc(s,' ');
        for(i=1;i<v.size();i++){
            for(j=v[i]-1;j>v[i-1];j--)
                printf("%c",s[j]);
            if(i!=v.size()-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
