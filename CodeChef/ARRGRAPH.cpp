#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

bool coprime[51][51];

void calculate(){
    for(int i=2; i<51; i++){
        for(int j=i+1; j<51; j++){
            if(__gcd(i, j)==1)
                coprime[i][j] = coprime[j][i] = true;
        }
    }

    return;
}

int main(){
    FasterIO;
    calculate();

    int t;
    cin>>t;

    while(t--){
        int n, cnt;
        cin>>n;

        int a[n];

        map<int, int>mp;

        for(int i=0; i<n; i++){
            cin>>a[i];
            mp[a[i]]++;
        }

        cnt = mp[47];

        int tmp = n;

        queue<int>q;
        q.push(a[0]);

        mp[a[0]]--;
        tmp--;

        while(!q.empty()){
            int v = q.front();
            q.pop();

            for(int i=0; i<n; i++){
                if(coprime[v][a[i]] && mp[a[i]]){
                    q.push(a[i]);
                    mp[a[i]]--;
                    tmp--;
                }
            }
        }

        if(tmp){
            cout<<"1\n";
            if(cnt==n){
                cout<<"43";
                for(int i=1; i<n; i++){
                    cout<<" "<<a[i];
                }
                cout<<endl;
            }

            else{
                cout<<"47";
                for(int i=1; i<n; i++){
                    cout<<" "<<a[i];
                }
                cout<<endl;
            }
        }

        else{
            cout<<"0\n";
            for(int i=0; i<n; i++){
                cout<<a[i];
                i==n-1 ? cout<<endl : cout<<" ";
            }
        }
    }

    return 0;
}
