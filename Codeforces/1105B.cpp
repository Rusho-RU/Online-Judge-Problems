#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, k;
    string s;

    while(cin>>n>>k>>s){
        vector<pair<char, int> >v;

        for(int i=0; i<n; i++)
            v.push_back(make_pair(s[i], i));

        sort(v.begin(), v.end());

        int mx = 0;

        for(int i=1, cnt=0; i<n; i++){
            while(i<n && v[i].first==v[i-1].first){
                cout<<i<<endl;
                int j = 1;
                while(i<n && j<k && v[i].first==v[i-1].first && v[i].second==v[i-1].second+1){
                    j++, i++;
                    //cout<<i<<endl;
                }

                if(j==k)
                    cnt++;
                else if(j==1)
                    i++;
            }

            mx = max(mx, cnt);
            cnt = 0;
            i--;
        }

        cout<<mx<<endl;
    }

    return 0;
}
