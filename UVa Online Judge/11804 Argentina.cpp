#include <bits/stdc++.h>
using namespace std;

struct Player{
    string name;
    int attack, defense;
};

bool cmp(const Player& a, const Player& b){
    if(a.attack == b.attack){
        if(a.defense == b.defense){
            return a.name < b.name;
        }
        return a.defense > b.defense;
    }

    return a.attack > b.attack;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        Player p[10];

        for(int i=0; i<10; i++)
            cin>>p[i].name>>p[i].attack>>p[i].defense;

        sort(p, p+10, cmp);
    }
}
