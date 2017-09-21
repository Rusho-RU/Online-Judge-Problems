#include <bits/stdc++.h>
using namespace std;

#define MAX 10000000

int team_info[MAX];

int main(){
    int n,Case=0;
    while(1){
        scanf("%d",&n);
        if(!n) break;
        int num,member;
        for(int i=0;i<n;i++){
            scanf("%d",&num);
            for(int j=0;j<num;j++){
                scanf("%d",&member);
                team_info[member]=i;
            }
        }

        char s[10];
        queue<int>team[n],info;
        Case++;
        printf("Scenario #%d\n",Case);
        while(scanf("%s",s) && s[0]!='S'){
            if(s[0]=='E'){
                scanf("%d",&member);
                int t=team_info[member];
                if(team[t].empty()) info.push(t);
                team[t].push(member);
            }

            else{
                int f=info.front();
                int ans=team[f].front();
                printf("%d\n",ans);
                team[f].pop();
                if(team[f].empty()) info.pop();
            }
        }
        printf("\n");
        team_info[MAX]={0};
    }
    return 0;
}
