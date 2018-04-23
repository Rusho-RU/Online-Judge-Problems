#include <bits/stdc++.h>
using namespace std;

bool cmp(const string& a, const string& b){
    return a.size()<b.size();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<string>encoded;
    string s;
    int Case=0;

    while(cin>>s){
        encoded.push_back(s);
        while(cin>>s && s!="9"){
            encoded.push_back(s);
        }

        sort(encoded.begin(), encoded.end(), cmp);
        bool decodable = true;

        for(int i=0; i<encoded.size() && decodable; i++){
            for(int j=i+1; j<encoded.size() && decodable; j++){
                for(int k=0; k<encoded[i].size(); k++){
                    if(encoded[i][k]!=encoded[j][k]){
                        decodable = true;
                        break;
                    }
                    else decodable = false;
                }
            }
        }

        encoded.clear();

        if(decodable)
            cout<<"Set "<<++Case<<" is immediately decodable"<<endl;
        else
            cout<<"Set "<<++Case<<" is not immediately decodable"<<endl;
    }

    return 0;
}
