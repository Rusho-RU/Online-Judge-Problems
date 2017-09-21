#include <bits/stdc++.h>
using namespace std;

struct team_info{
    int points,played,win,tie,lose,scored,against,difference;
    string NAME;
    char name[50];
};

bool compare(team_info a, team_info b){
    if(a.points==b.points)
        if(a.win==b.win)
            if(a.difference==b.difference)
                if(a.scored==b.scored)
                    if(a.played==b.played)
                        return strcasecmp(a.name,b.name)<=0;
                    else return a.played<b.played;
                else return a.scored>b.scored;
            else return a.difference>b.difference;
        else return a.win>b.win;
    else return a.points>b.points;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char tournament[110];
        scanf(" %[^\n]",tournament);
        int n;
        scanf("%d",&n);
        team_info team[n];
        map<string,int>index_of;

        for(int i=0;i<n;i++){
            team[i]={0,0,0,0,0,0,0,0};
            scanf(" %[^\n]",team[i].name);
            team[i].NAME=team[i].name;
            index_of[team[i].NAME]=i;
        }

        int game;
        scanf("%d",&game);
        int goal1,goal2,id1,id2;
        char team1[50],team2[50];

        for(int i=0;i<game;i++){
            scanf(" %[^#]#%d@%d#%[^\n]",team1,&goal1,&goal2,team2);
            id1=index_of[team1];
            id2=index_of[team2];
            if(goal1>goal2)
                team[id1].win++,team[id2].lose++,team[id1].points+=3;
            else if(goal1<goal2)
                team[id2].win++,team[id1].lose++,team[id2].points+=3;
            else
                team[id1].tie++,team[id2].tie++,team[id1].points++,team[id2].points++;
            team[id1].scored+=goal1,team[id1].against+=goal2,team[id1].difference+=goal1-goal2,team[id1].played++;
            team[id2].scored+=goal2,team[id2].against+=goal1,team[id2].difference+=goal2-goal1,team[id2].played++;
        }
        sort(team,team+n,compare);
        printf("%s\n",tournament);
        for(int i=0;i<n;i++)
            printf("%d) %s %dp, %dg (%d-%d-%d), %dgd (%d-%d)\n",i+1,team[i].name,team[i].points,team[i].played,team[i].win,team[i].tie,team[i].lose,team[i].difference,team[i].scored,team[i].against);
        if(t)
            printf("\n");
    }
    return 0;
}
