#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(false);cin.tie(NULL)

string convert(long long n){
    string s;
    while(n){
        s+=(n%10)+'0';
        n/=10;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main(){
    FasterIO;
    int n,Case=0;
    while(cin>>n && n){
        long long mobile[n];
        int i;

        for(int i=0;i<n;i++)
            cin>>mobile[i];

        cout<<"Case "<<++Case<<":\n";
        for(i=0;i<n;i++){
            int j=i;
            while(i+1<n && mobile[i+1]==mobile[i]+1)
                i++;
            if(i==j) cout<<"0"<<mobile[i]<<endl;
            else{
                string s1='0'+convert(mobile[i]),s2='0'+convert(mobile[j]),s;
                cout<<s2<<"-";
                int pos=0;
                while(s1[pos]==s2[pos])
                    pos++;
                for(int i=pos;i<s1.size();i++)
                    cout<<s1[i];
                cout<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
