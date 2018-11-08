#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int nParty;
        cin>>nParty;
        cin.ignore();

        map<string, string>partyOf;
        string party, candidate;

        while(nParty--){
            getline(cin, candidate);
            getline(cin, party);

            partyOf[candidate] = party;
        }

        map<string, int>voteOf;

        int ballot;
        cin>>ballot;
        cin.ignore();

        while(ballot--){
            getline(cin, candidate);
            if(partyOf.find(candidate)==partyOf.end()) continue;
            voteOf[candidate]++;
        }

        map<string, int>::iterator it;
        int ans = INT_MIN;
        string winner;

        for(it = voteOf.begin(); it!=voteOf.end(); it++){
            if(it->second > ans){
                winner = it->first;
                ans = it->second;
            }
        }

        int cnt=0;

        for(it = voteOf.begin(); it!=voteOf.end(); it++){
            if(it->second==ans)
                cnt++;
        }

        if(ans==INT_MIN || cnt>1)
            cout<<"tie"<<endl;
        else
            cout<<partyOf[winner]<<endl;

        if(t)
            cout<<endl;
    }

    return 0;
}
