#include <bits/stdc++.h>
using namespace std;

struct type{
    int sum=0,count=0;
};

type sum(string s){
    type temp;
    for(int i=0;i<s.size();i++){
        int hold=s[i]-'0';
        temp.sum+=hold;
        if(hold%3==0) temp.count++;
    }
    return temp;
}

bool possible(string s, int sum){
    for(int i=0;i<s.size();i++)
        if((sum-(s[i]-'0'))%3==0)
            return true;

    return false;
}

int main(){
    int t;
    scanf("%d",&t);
    for(int Case=1;Case<=t;Case++){
        string s;
        cin>>s;
        type info=sum(s);
        printf("Case %d: ",Case);
        if(info.sum%3==0)
            (info.count%2==0)? printf("T\n") : printf("S\n");
        else if(possible(s,info.sum))
            (info.count%2==0)? printf("S\n") : printf("T\n");
        else
            printf("T\n");
    }
    return 0;
}
