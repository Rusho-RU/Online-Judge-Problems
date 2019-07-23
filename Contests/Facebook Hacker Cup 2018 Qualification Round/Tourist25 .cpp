#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<string , int>& a, const pair<string , int>& b){
    return a.second < b.second;
}

int main(){
    freopen("tourist.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, Case=0;
    cin>>t;

    while(t--){
        int n,k;
        long long m;
        cin>>n>>k>>m;
        string data[n];

        for(int i=0; i<n; i++)
            cin>>data[i];

        cout<<"Case #"<<++Case<<":";

        vector<pair<string , int> >v;

        for(long long i = k*(m-1), cnt=0; cnt<k; cnt++, i++){
            v.push_back(make_pair(data[i%n], i%n));
        }

        sort(v.begin(), v.end(), cmp);

        for(int i=0; i<v.size(); i++){
            cout<<" "<<v[i].first;
        }

        cout<<endl;
    }

    return 0;
}
