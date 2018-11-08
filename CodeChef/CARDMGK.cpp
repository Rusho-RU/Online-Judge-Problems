#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int data[n];

        for(int i=0; i<n; i++)
            cin>>data[i];

        int sum = 0;
        int index;

        for(int i=1; i<n; i++){
            if(data[i] < data[i-1]){
                sum++;
                index = i;
            }
        }

        if(!sum){
            cout<<"YES\n";
            continue;
        }

        if(sum==1){
            int mx = data[index];

            for(int i=index+1; i<n; i++)
                mx = max(mx, data[i]);

            bool found = false;

            for(int i=0; i<index && !found; i++)
                if(data[i]<mx)
                    found = true;

            if(found)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }

        else
            cout<<"NO"<<endl;
    }

    return 0;
}
