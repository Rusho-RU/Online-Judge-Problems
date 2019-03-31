#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;
const int MAX = 200010;

int index[MAX], cnt[MAX];

int main(){
    FasterIO;

    int n;
    cin>>n;

    int data[n];

    for(int i=0; i<n; i++){
        cin>>data[i];
        cnt[data[i]]++;
        index[data[i]] = i;
    }

    int idx = 0, c=0;

    for(int i=0; i<MAX; i++){
        if(cnt[i]>c){
            c = cnt[i];
            idx = i;
        }
    }

    int rem = n - c;
    int hold = index[idx];

    cout<<rem<<endl;

    for(int i=hold-1; i>=0; i--){
        if(data[i]>idx)
            cout<<"2 ";
        else if(data[i]<idx)
            cout<<"1 ";
        if(data[i]!=idx)
            cout<<i+1<<" "<<i+2<<endl;
    }

    for(int i = hold+1; i<n; i++){
        if(data[i]>idx)
            cout<<"2 ";
        else if(data[i]<idx)
            cout<<"1 ";
        if(data[i]!=idx)
            cout<<i+1<<" "<<i<<endl;
    }

    return 0;
}

