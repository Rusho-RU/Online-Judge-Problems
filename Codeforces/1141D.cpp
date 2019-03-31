#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        string l, r;

        cin>>l>>r;

        vector<int>ll[27], rr[27];

        for(int i=0; i<n; i++)
            l[i]=='?' ? ll[0].push_back(i) : ll[l[i]-'a'+1].push_back(i);

        for(int i=0; i<n; i++)
            r[i]=='?' ? rr[0].push_back(i) : rr[r[i]-'a'+1].push_back(i);

        vector<pair<int, int> >v;

        for(int i=1; i<=26; i++){
            for(;;){
                int mn = min(ll[i].size(), rr[i].size());
                if(mn==0)
                    break;

                int ls = ll[i].size(), rs = rr[i].size();

                v.push_back(make_pair(ll[i][ls-1], rr[i][rs-1]));

                rr[i].pop_back();
                ll[i].pop_back();
            }
        }

        for(int i=1; i<27; i++){
            for(; !ll[0].empty(); ){
                if(rr[i].empty())
                    break;

                int ls = ll[0].size(), rs = rr[i].size();

                v.push_back(make_pair(ll[0][ls-1], rr[i][rs-1]));

                ll[0].pop_back();
                rr[i].pop_back();
            }
        }

        for(int i=1; i<27; i++){
            for(; !rr[0].empty(); ){
                if(ll[i].empty())
                    break;

                int ls = ll[i].size(), rs = rr[0].size();

                v.push_back(make_pair(ll[i][ls-1], rr[0][rs-1]));

                ll[i].pop_back();
                rr[0].pop_back();
            }
        }

        for(;;){
            int mn = min(ll[0].size(), rr[0].size());

            if(mn==0) break;

            int ls = ll[0].size(), rs = rr[0].size();

            v.push_back(make_pair(ll[0][ls-1], rr[0][rs-1]));
            ll[0].pop_back();
            rr[0].pop_back();
        }

        cout<<v.size()<<endl;

        for(auto p : v)
            cout<<p.first+1<<" "<<p.second+1<<endl;
    }

    return 0;
}

