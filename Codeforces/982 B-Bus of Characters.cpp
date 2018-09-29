#include <bits/stdc++.h>
using namespace std;

#define fasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie();

struct cmp1{
    bool operator()(const pair<int, int>& a, const pair<int, int>& b){
        return a.second > b.second;
    }
};

struct cmp2{
    bool operator()(const pair<int, int>& a, const pair<int, int>& b){
        return a.second < b.second;
    }
};

int main(){
    fasterIO;

    int n;

    while(cin>>n){
        priority_queue< pair<int, int>, vector<pair<int, int> >, cmp1 >introvert;
        priority_queue< pair<int, int>, vector<pair<int, int> >, cmp2 >extrovert;

        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            introvert.push(make_pair(i+1,val));
        }

        string seat;
        cin>>seat;

        for(int i=0; i<seat.size(); i++){
            if(seat[i]=='0'){
                cout<<introvert.top().first<<" ";
                extrovert.push(introvert.top());
                introvert.pop();
            }

            else{
                cout<<extrovert.top().first<<" ";
                extrovert.pop();
            }
        }

        cout<<endl;
    }

    return 0;
}
