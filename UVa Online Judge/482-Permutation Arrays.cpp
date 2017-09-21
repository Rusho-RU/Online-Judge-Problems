#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        map<int,string>m;
        string s;
        int n,high,i;
        char c;
        vector<int>a;
        while(1){
            scanf("%d",&n);
            c=getchar();
            a.push_back(n);
            if(c=='\n')
                break;
        }
        for(i=0;i<a.size();i++){
            cin>>s;
            m[a[i]-1]=s;
        }
        for(i=0;i<a.size();i++)
            cout<<m[i]<<endl;
        if(t) printf("\n");
    }
    return 0;
}
