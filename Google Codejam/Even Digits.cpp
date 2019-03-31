#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

long long ston(const string& s){
    long long ans = 0;

    for(int i=0; i<s.size(); i++)
        ans = ans*10+(s[i]-'0');

    return ans;
}

int main(){
    FasterIO;

    int t, Case=0;
    cin>>t;
    string n;

    while(t--){
        cin>>n;

        string num1 = n, num2 = n;
        int i;

        for(i=0; i<n.size(); i++){
            if(num1[i]&1){
                num1[i]--;
                break;
            }
        }

        while(++i<num1.size())
            num1[i] = '8';

        for(i=0; i<num2.size(); i++){
            if(num2[i]&1){
                if(num2[i]=='9'){
                    num2[i] = '0';
                    int j = i-1;
                    while(j>=0 && num2[j]=='8')
                        num2[j] = '0', j--;

                    if(j==-1)
                        num2 = '2'+num2;
                    else
                        num2[j] += 2;
                }
                else
                    num2[i]++;

                break;
            }
        }

        while(++i<num2.size())
            num2[i] = '0';


        long long n1 = ston(num1);
        long long n2 = ston(num2);
        long long n3 = ston(n);

        cout<<"Case #"<<++Case<<": "<<min(n3-n1, n2-n3)<<endl;
    }

    return 0;
}
