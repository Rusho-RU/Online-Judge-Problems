#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define MAX 15050

string word[MAX];
int letter[MAX][26];

int main(){
    FasterIO;

    int n=0;

    while(cin>>word[n++]){
        int curr = n-1;
        for(int j=0; j<word[curr].size(); j++){
            letter[curr][word[curr][j]-'a']++;
        }
    }

    bool isOK[n];
    memset(isOK, 1, sizeof isOK);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) continue;
            bool dominate = true;
            for(int k=0;k<26; k++){
                if(letter[i][k] < letter[j][k]){
                    dominate = false;
                    break;
                }
            }

            if(dominate)
                isOK[j] = false;
        }
    }

    vector<string>v;

    for(int i=0; i<n; i++)
        if(isOK[i])
            v.push_back(word[i]);

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<endl;

    return 0;
}
