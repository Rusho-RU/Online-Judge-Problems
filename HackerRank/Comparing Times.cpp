#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n1,m1,n2,m2,ans=1;
        char s[10],s1[5],s2[5];
        scanf("%d:%d%s %d:%d%s",&n1,&m1,s1,&n2,&m2,s2);

        if(s1[0]=='P' && n1!=12) n1+=12;

        else if(s1[0]=='A' && n1==12) n1=0;

        if(s2[0]=='P' && n2!=12) n2+=12;

        else if(s2[0]=='A' && n2==12) n2=0;

        if(n1<n2) ans=1;

        else if(n1>n2) ans=2;

        else{
            if(m1<m2) ans=1;
            else ans=2;
        }

        if(ans==1) printf("First\n");
        else printf("Second\n");
    }
    return 0;
}
