#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        if(s.size()==1) printf("YES\n");
        else{
            int limit=s.size()/2,count=0;
            for(int i=0;i<limit;i++)
                if(s[i]!=s[s.size()-i-1])
                    count++;
            if(count==1 || (count==0 && s.size()%2==1)) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}
