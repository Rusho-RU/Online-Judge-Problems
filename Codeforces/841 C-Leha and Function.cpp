#include <bits/stdc++.h>
using namespace std;

struct element{
    long long val;
    int ind;
    element(long long a, int b):val(a), ind(b){}
};

bool cmp1(const int& a, const int& b){
    return a>b;
}

bool cmp2(const element& a, const element& b){
    if(a.val==b.val)
        return a.ind>b.ind;
    return a.val<b.val;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;

    while(cin>>n){
        long long a;
        vector<element>v;
        vector<long long>u;
        long long ans[n];

        for(int i=0;i<n;i++){
            cin>>a;
            u.push_back(a);
        }

        sort(u.begin(), u.end(), cmp1);

        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(element(a,i));
        }

        sort(v.begin(), v.end(), cmp2);

        for(int i=0; i<n; i++){
            int x=v[i].ind;
            ans[x]=u[i];
        }

        cout<<ans[0];

        for(int i=1;i<n;i++){
            cout<<" "<<ans[i];
        }

        cout<<endl;
    }

    return 0;
}
