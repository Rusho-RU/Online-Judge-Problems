#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define MOD 998244353

long long hasSquareRoot(long long n){
    long long root = sqrt(n);

    if(root*root > n) root--;
    else if(root*root < n) root++;

    if(root*root==n) return root;

    return 0;
}

long long hasCubeRoot(long long n){
    long long root = pow(n, 1.0/3.0);

    if(root*root*root > n) root--;
    else if(root*root*root < n) root++;

    if(root*root*root == n) return root;

    return 0;
}

int main(){
    FasterIO;

    int n;
    map<long long, int>mp;
    vector<long long>pq, prime;

    while(scanf("%d",&n)==1){
        long long data, root2, root3, root4;

        for(int i=0; i<n; i++){
            cin>>data;

            root3 = hasCubeRoot(data);
            if(root3){
                mp[root3] += 3;
                continue;
            }

            root2 = hasSquareRoot(data);
            if(root2){

                root4 = hasSquareRoot(root2);
                if(root4)
                    mp[root4] += 4;
                else
                    mp[root2] += 2;
            }

            else
                pq.push_back(data);
        }

        for(int i=0; i<pq.size(); i++){
            for(int j=i+1; j<pq.size(); j++){
                if(pq[i] != pq[j]){
                    long long gcd = __gcd(pq[i], pq[j]);
                    if(gcd != 1){
                        mp[gcd];
                    }
                }
            }
        }

        for(auto &p : mp)
            prime.push_back(p.first);

        for(long long data : pq){
            bool found = false;
            for(long long p : prime){
                if(data%p==0){
                    mp[p]++, mp[data/p]++;
                    found = true;
                    break;
                }
            }

            if(!found){
                mp[data]--;
            }
        }

        long long ans = 1;

        for(auto &p : mp){
            if(p.second>0)
                ans = (ans * (p.second+1)) % MOD;
            else{
                ans = (ans * (1-p.second)) % MOD;
                ans = (ans * (1-p.second)) % MOD;
            }
        }
        cout<<ans<<endl;

        mp.clear();
        prime.clear();
        pq.clear();
    }

    return 0;
}
