#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, pair<int, int> >mp;

    int data[6] = {4, 8, 15, 16, 23, 42};

    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            mp[data[i]*data[j]] = {data[i], data[j]};
        }
    }

    int mul[4], ans[6];

    cout<<"? 1 2"<<endl;
    fflush(stdout);
    cin>>mul[0];

    cout<<"? 3 4"<<endl;
    fflush(stdout);
    cin>>mul[1];

    cout<<"? 2 3"<<endl;
    fflush(stdout);
    cin>>mul[2];

    cout<<"? 4 5"<<endl;
    fflush(stdout);
    cin>>mul[3];

    int a = mp[mul[2]].first;
    int b = mp[mul[2]].second;

    if(mul[0]%a==0 && mul[0]%b==0){
        int h1 = mul[0]/a, h2 = mul[0]/b;

        for(int i=0; i<6; i++){
            if(h1==data[i]){
                ans[1] =
            }
        }
    }

    else if(mul[0]%a==0){
        ans[1] = a;
        ans[2] = b;
    }

    else{
        ans[1] =b;
        ans[2] = b;
    }
}
