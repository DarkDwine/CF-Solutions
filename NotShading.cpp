//https://codeforces.com/problemset/problem/1627/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    const int A = 1e9 + 1;
    int t;
    cin>>t;
    while(t--){
        int n, m, r, c;
        cin>>n>>m>>r>>c;
        r--, c--;
        char block[n][m];
        int check = -1;
        int cnt = -1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>block[i][j];
                if(block[i][j] == 'B') cnt = 0;
                if(i==r && block[r][j]=='B') check = 1;
                else if(j==c && block[i][c]=='B') check = 1;
                // cout<<check;
            }
        }
        if(cnt == -1){
            cout<< -1 <<"\n";
            continue;
        }
        if(block[r][c]=='B'){
            cout<< 0<<"\n";
            continue;
        }
        if(check == 1){
            cout<< 1<<"\n";
            continue;
        }
        else cout<< 2 <<"\n";
        

    }
}