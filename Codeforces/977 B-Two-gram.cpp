#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    while(cin>>n){
        string s;
        cin>>s;
        int arr[26][26];

        memset(arr, 0, sizeof arr);

        char ch1, ch2;
        int mx = -1;

        for(int i=1; i<n; i++){
            int a = s[i-1] - 'A';
            int b = s[i]-'A';
            arr[a][b]++;

            if(arr[a][b]>mx){
                mx = arr[a][b];
                ch1 = s[i-1], ch2 = s[i];
            }
        }

        cout<<ch1<<ch2<<endl;
    }

    return 0;
}

