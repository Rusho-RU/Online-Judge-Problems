#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        int i,j,k,cnt=0;

        for(i=0; i<s.size(); i++){
            if(s[i]=='Q'){
                for(j=i+1; j<s.size(); j++){
                    if(s[j]=='A'){
                        for(k=j+1; k<s.size(); k++){
                            if(s[k]=='Q')
                                cnt++;
                        }
                    }
                }
            }
        }

        printf("%d\n",cnt);
    }

    return 0;
}
