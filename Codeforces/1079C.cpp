#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 100010

int data[MAX], finger[MAX], n;

bool recur(int f, int id){
    if(id >= n) return false;
}

int main(){
    FasterIO;

    while(cin>>n){

        for(int i=0; i<n; i++)
            cin>>data[i];

        bool possible = recur(1, 0);
    }

    return 0;
}

