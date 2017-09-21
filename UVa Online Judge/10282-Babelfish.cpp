#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2,s;
    char c;
    map<string,string>mapped;
    while(1){
        while(1){
            scanf("%c",&c);

            if(c==' '){
                s1=s;
                s.clear();
            }

            else if(c=='\n') break;

            else s+=c;
        }
        if(s.size()){
            mapped[s]=s1;
            s.clear();
        }
        else break;
    }

    while(cin>>s1){
        if(mapped[s1].size())
            cout<<mapped[s1]<<endl;
        else
            printf("eh\n");
    }
    return 0;
}
