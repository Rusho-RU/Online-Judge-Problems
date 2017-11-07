#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        char tribe;
        int A=0, B=0;

        for(int i=0; i<s.size(); i++){
            if(s[i]!='.'){
                tribe = s[i];
                int first=i, last=i;
                while(1){
                    i++;
                    if(s[i]==tribe)
                        last = i;
                    else if(s[i]=='.')
                        continue;
                    else
                        break;
                }

                if(tribe == 'A')
                    A+=last - first + 1;
                else
                    B+=last - first + 1;
                i--;
            }
        }

        printf("%d %d\n",A,B);
    }

    return 0;
}
