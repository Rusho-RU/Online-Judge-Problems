#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000000
bool not_prime[MAX];
int woo[3]={2,4,2};

void SimpleSieve(){
    for(int i=4;i<=MAX;i+=2)
        not_prime[i]=true;

    for(int i=9;i<=MAX;i+=6)
        not_prime[i]=true;

    for(int i=25;i<=MAX;i+=10)
        not_prime[i]=true;

    int hold,rem;
    for(int i=7,k=1;i*i<=MAX;k++){
        if(!not_prime[i]){
            hold=woo[k&1];
            not_prime[i*i]=true;
            for(int j=i*i,x=1;j<=MAX;x++){
                j+=hold*i;
                not_prime[j]=true;
                hold=woo[hold%4];
            }

        }
        rem=woo[k&1];
        i+=rem;
    }
}

int main(){
    int n;
    while(scanf("%d",&n)==1){
        int data[n];
        vector<int>ind;
        for(int i=0;i<n;i++){
            scanf("%d",&data[i]);
            if(!not_prime[data[i]] || data[i]==1)
                ind.push_back(i);
        }

        while(1){
            vector<int>rem=ind;
            ind.clear();
            sum+=ind.size();
            for(int i=0;i<rem.size();i++){
                data[i]=data[i]-data[i+1],data[i+1]=data[i]+data[i+1];
                if(!not_prime[data[i]]|| data[i]==1) ind.push_back(i);
                if(!not_prime[data[i+1]]|| data[i+1]==1) ind.push_back(i+1);
            }
            if(ind.empty()) break;
        }
        printf("")
    }
    return 0;
}
