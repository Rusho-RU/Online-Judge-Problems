#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int z=0;z<t;z++){
        map<string,int>m;
        string s;
        int day,d,n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            cin>>s>>day;
            m[s]=day;
        }
        scanf("%d",&d);
        cin>>s;
        printf("Case %d: ",z+1);
        if(!m[s] || m[s]>d+5)
            printf("Do your own homework!\n");
        else if(m[s]>0 && m[s]<=d)
            printf("Yesss\n");
        else
            printf("Late\n");
    }
    return 0;
}
