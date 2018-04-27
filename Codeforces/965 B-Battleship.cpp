#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, limit;

    while(scanf("%d %d",&n,&limit)==2){
        bool grid[n][n];
        int cnt[n][n];
        memset(cnt, 0, sizeof cnt);

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                char ch;
                scanf(" %c",&ch);
                if(ch=='#') grid[i][j] = false;
                else grid[i][j] = true;
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int dist = 0;
                for(int k=0; j+k<n && dist<limit; k++, dist++){
                    if(grid[i][j+k])
                        cnt[i][j+k]++;
                    else break;
                }
                if(dist!=limit)
                    dist=0;
                    for(int k=0; j+k<n && dist<limit; k++, dist++){
                    if(grid[i][j+k])
                        cnt[i][j+k]--;
                    else break;
                }

                dist = 0;
                for(int k=0; j-k>=0 && dist<limit; k++, dist++){
                    if(grid[i][j-k])
                        cnt[i][j-k]++;
                    else break;
                }
                if(dist!=limit)
                    dist=0;
                    for(int k=0; j-k>=0 && dist<limit; k++, dist++){
                    if(grid[i][j-k])
                        cnt[i][j-k]--;
                    else break;
                }

                dist = 0;
                for(int k=0; i+k<n && dist<limit; k++, dist++){
                    if(grid[i+k][j])
                        cnt[i+k][j]++;
                    else break;
                }

                if(dist!=limit)
                    dist = 0;
                    for(int k=0; i+k<n && dist<limit; k++, dist++){
                        if(grid[i+k][j])
                            cnt[i+k][j]--;
                        else break;
                    }

                dist = 0;
                for(int k=0; i-k>=0 && dist<limit; k++, dist++){
                    if(grid[i-k][j])
                        cnt[i-k][j]++;
                    else break;
                }

                if(dist!=limit)
                    dist = 0;
                    for(int k=0; i-k>=0 && dist<limit; k++, dist++){
                        if(grid[i-k][j])
                            cnt[i-k][j]--;
                        else break;
                    }
            }
        }

        int mx = -1, x=1,y=1;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(cnt[i][j]>mx){
                    mx = cnt[i][j];
                    x = i, y = j;
                }
            }
        }

        printf("%d %d\n",x+1,y+1);
    }

    return 0;
}
