#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(scanf("%d",&t)!=-1){
        char c;
        map<string,bool>mp;

        getchar();
        while(t--){
            string s;
            cin>>s;

            while(1){
                int indx = s.find("kh");
                if(indx>=s.size())
                    break;
                s.replace(indx, 2, "h");
            }

            while(1){
                int indx = s.find("u");
                if(indx>=s.size())
                    break;
                s.replace(indx, 1, "oo");
            }

            mp[s] = true;
        }

        printf("%d\n",mp.size());
    }

    return 0;
}
