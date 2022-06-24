// https://codeforces.com/problemset/gymProblem/316009/F

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int row = 0, col = 0;
        int chk = 1, ans = 0;
        int mat[n][m];
        for(int i=0; i<n; i++){
            row = 0;
            for(int j=0; j<m; j++){
                cin>>mat[i][j];
                if(mat[i][j]){
                    if(chk) row++;
                    ans++;
                }
            }
            if(chk == 1 && row < m && row%2 == 1){
                chk=0;
            }    
        }
        if(chk){
            for(int j = 0; j < m; j++){
                col = 0;
                for(int i = 0; i < n; i++){
                    if(mat[i][j]){
                        col++;
                    }
                }
                if(col < n && col%2 == 1){
                    chk = 0;
                    break;
                }
            }
        }
        if(chk == 0) ans++;
        cout<<ans<<"\n";
    }
}