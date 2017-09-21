#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,l,c;
    while(scanf("%d%d%d",&n,&l,&c)==3){
        string s;
        int i,ch=0,line=0;
        for(i=0;i<n;i++){
            cin>>s;
            ch+=s.size();
            if(ch>=c){
                line++;
                if(ch==c) ch=0;
                else if(i==n-1) ch=s.size();
                else ch=s.size()+1;
            }
            else ch++;
        }
        if(ch) line++;
        int ans=line/l;
        if(line%l) ans++;
        printf("%d\n",ans);
    }
    return 0;
}
