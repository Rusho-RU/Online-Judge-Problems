#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void print(bool possible){
    if(possible)
        cout<<"encaixa"<<endl;
    else
        cout<<"nao encaixa"<<endl;

    return;
}

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        string s1, s2;
        cin>>s1>>s2;

        if(s1.size()<s2.size()){
            print(0);
            continue;
        }

        bool fitted = true;

        for(int i=s1.size()-1, j=s2.size()-1; j>=0; j--, i--){
            if(s1[i]!=s2[j]){
                fitted = false;
                break;
            }
        }

        if(fitted)
            print(1);
        else
            print(0);
    }

    return 0;
}
