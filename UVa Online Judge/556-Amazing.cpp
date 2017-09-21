#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    while(scanf("%d%d",&r,&c),r,c){
        int i,j,k;
        map<int, map<int, int> >m;
        char adj[r+2][c+5];
        memset(adj,'1',(r+2)*(c+5)*sizeof adj[0][0]);
        getchar();

        for(i=1;i<r+1;i++){
            for(j=1;j<c+1;j++){
                scanf("%c",&adj[i][j]);
            }
            getchar();
        }

        i=r,j=1;
        char ch='R';
        bool out=false;
        for(k=0;;k++){
            if(i!=r || j!=1) out=true;
            if(ch=='R'){
                if(adj[i+1][j]=='0') ch='D',m[i][j]++,i++;

                else if(adj[i][j+1]=='1') ch='U';

                else m[i][j]++,j++;
            }

            else if(ch=='U'){
                if(adj[i][j+1]=='0') ch='R',m[i][j]++,j++;

                else if(adj[i-1][j]=='1') ch='L';

                else m[i][j]++,i--;
            }

            else if(ch=='D'){
                if(adj[i][j-1]=='0') ch='L',m[i][j]++,j--;

                else if(adj[i+1][j]=='1') ch='R';

                else m[i][j]++,i++;
            }

            else if(ch=='L'){
                if(adj[i-1][j]=='0') ch='U',m[i][j]++,i--;

                else if(adj[i][j-1]=='1') ch='D';

                else m[i][j]++,j--;
            }

            if(out && i==r && j==1) break;
        }
        int a[5];
        memset(a,0,5*sizeof a[0]);
        adj[r][1]='1';
        for(i=1;i<r+1;i++){
            for(j=1;j<c+1;j++){
                if(adj[i][j]=='0')
                    a[m[i][j]]++;
            }
        }
        a[1]++;
        for(i=0;i<5;i++)
            printf("%3d",a[i]);
        printf("\n");
    }
    return 0;
}
