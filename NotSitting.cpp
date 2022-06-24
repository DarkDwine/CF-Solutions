// https://codeforces.com/problemset/problem/1627/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> love;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int dist = max(i, n-i-1) + max(j, m-j-1);
                love.push_back(dist);
            }
        }
        sort(love.begin(), love.end());
        for(int k=0; k<n*m; k++){
            cout<<love[k]<<" ";
        }
    }
}