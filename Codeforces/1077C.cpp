#include <bits/stdc++.h>

using namespace std;
#define MAX 200010

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount(n) __builtin_popcount(n)

int main(){
    FasterIO;

    long long n, data[MAX], hold[MAX];
    cin >> n;
    long long sum = 0;
    for(int i = 0; i < n; i++){

        cin >> data[i];
        hold[i] = data[i];
        sum += data[i];
    }
    sort(data, data+n);
    vector<int> v;
    for(int i = 0; i < n; i++){

        if(hold[i] == data[n-1]){

            if(sum-hold[i]==2*data[n-2])
                v.push_back(i+1);
        }
        else{

            if(sum-hold[i] == 2*data[n-1])
                v.push_back(i+1);
        }
    }
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}
