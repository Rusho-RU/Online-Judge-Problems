#include <bits/stdc++.h>
using namespace std;

struct team_info{
    int penalty=0,team_num=0,solved=0,incorrect[10]={0};
    bool SOLVED[10]={false};
};

bool compare(team_info const& left, team_info const& right){
    if(left.solved==right.solved)
        if(left.penalty==right.penalty)
            return left.team_num<right.team_num;
        else return left.penalty<right.penalty;
    else return left.solved>right.solved;
}

int main(){
    int t;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--){
        bool submitted[103]={false};
        team_info team[104]; //={0,0,0,{0},{false}};
        int contestant,problem,time;
        char c,s[50];

        while(gets(s) && strlen(s)){
            sscanf(s,"%d %d %d %c",&contestant,&problem,&time,&c);

            if(!submitted[contestant])
                submitted[contestant]=true,team[contestant].team_num=contestant;

            if(!team[contestant].SOLVED[problem])
                if(c=='C'){
                    team[contestant].penalty+=time+team[contestant].incorrect[problem];
                    team[contestant].SOLVED[problem]=true;
                    team[contestant].solved++;
                    team[contestant].incorrect[problem]=0;
                }

                else if(c=='I')
                    team[contestant].incorrect[problem]+=20;
        }

        vector<team_info>v;
        for(int i=1;i<101;i++)
            if(submitted[i])
                v.push_back(team[i]);

        sort(v.begin(),v.end(),compare);
        for(int i=0;i<v.size();i++)
            printf("%d %d %d\n",v[i].team_num,v[i].solved,v[i].penalty);
        if(t) printf("\n");
    }
    return 0;
}
