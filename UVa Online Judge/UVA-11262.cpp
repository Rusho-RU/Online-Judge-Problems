#include <bits/stdc++.h>
using namespace std;

#define INF 10000000

vector<pair<int, int> >blue;
vector<pair<int, int> >red;

bool visited[200];

int bound, X[200], Y[200];

int dist(pair<int, int>& a, pair<int, int>& b){
    int x = a.first - b.first;
    int y = a.second - b.second;

    return x*x + y*y;
}

int check(int i){
    for(int j=0; j<red.size(); j++){
        if(!visited[j] && dist(blue[i], red[j])<=bound){
            visited[j] = true;
            if(Y[j]==-1 || check(Y[j])){
                X[i] = j;
                Y[j] = i;
                return 1;
            }
        }
    }

    return 0;
}

bool possible(int k){
    memset(Y, -1, sizeof Y);
    memset(X, -1, sizeof X);

    int ret = 0;

    for(int i=0; i<blue.size(); i++){
        if(X[i]==-1){
            memset(visited, false, sizeof visited);
            ret+=check(i);
        }
    }

    return ret>=k;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        char ch[20];
        int x,y,n,k;
        scanf("%d%d",&n,&k);

        for(int i=0; i<n; i++){
            scanf("%d%d%s",&x,&y,&ch);
            if(ch[0]=='b')
                blue.push_back(make_pair(x,y));
            else
                red.push_back(make_pair(x,y));
        }

        if(min(blue.size(), red.size()) < k){
            puts("impossible");
            continue;
        }

        int l = 0, r = INF, mid;

        while(l<r){
            mid = (l+r)/2;
            bound = mid;
            if(possible(k))
                r = mid;
            else
                l = mid+1;
        }

        printf("%d\n",(int)ceil(sqrt(1.0*l)));

        for(int i=0; i<blue.size(); i++)
            printf("%d\n",X[i]);

        for(int i=0; i<red.size(); i++)
            printf("%d\n",Y[i]);

        blue.clear();
        red.clear();
    }

    return 0;
}
