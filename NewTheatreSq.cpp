// https://codeforces.com/problemset/problem/1359/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n, m, x, y;
        cin>>n>>m>>x>>y;
        char tiles[n][m];
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                cin>>tiles[i][j];
            }
        }
        if(x*2<y) y = 2*x;
        int white = 0;
        int cost = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(tiles[i][j]== '.'){
                    
                    if(white == 0){
                        white = 1;
                        cost += x;
                    }
                    else if(white == 1){
                        white = 0;
                        cost -=x;
                        cost += y;
                    }
                }
                if(tiles[i][j]=='*') white = 0;

            }
            white = 0;
        }
        cout<<cost<<'\n';
    }
}