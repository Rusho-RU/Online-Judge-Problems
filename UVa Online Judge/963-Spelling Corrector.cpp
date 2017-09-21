#include <bits/stdc++.h>
using namespace std;

vector<string>word;

int editDistance(string s, string c){                   ///Function to implement Lavenshtein's Distance Algorithm
    int distance[s.size()+1][c.size()+1];

    for(int i=0;i<=s.size();i++)
        distance[i][0]=i*3;

    for(int i=0;i<=c.size();i++)
        distance[0][i]=i*3;

    for(int i=0; i<s.size(); i++){
        for(int j=0; j<c.size(); j++){
            int edit=5;
            if(s[i]==c[j]) edit=0;
            distance[i+1][j+1]=min(distance[i+1][j]+3, min(distance[i][j+1]+3, distance[i][j]+edit));
        }
    }

    return distance[s.size()][c.size()];
}

int corrected(string s){
    int cost, minCost=(int)1e6, index=0;

    for(int i=0; i<word.size(); i++){
        cost=editDistance(s,word[i]);
        if(cost<minCost)
            minCost=cost, index=i;
    }
    return index;
}

int main(){
    int n,m;
    bool firstTime=true;

    while(cin>>n){
        if(!firstTime) cout<<endl;
        else firstTime=false;

        string s;

        for(int i=0;i<n;i++){
            cin>>s;
            word.push_back(s);
        }

        sort(word.begin(), word.end());
        s.clear();
        scanf("%d",&n);
        char c;
        int cnt=0;
        getchar();

        while(1){
            while(scanf("%c",&c) && c!=' ' && c!='\n'){
                s+=c;
            }

            if(!s.empty()){
                cout<<word[corrected(s)];
                s.clear();
                cnt++;
            }

            printf("%c",c);
            if(cnt==m && c=='\n') break;
        }

        word.clear();
    }
    return 0;
}
