// https://codeforces.com/contest/1700/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        long long n, m;
        cin>>n>>m;
        long long sum = 0;
        for(long long j=1; j<=m; j++){
            sum += j; 
        }
        for(long long i = 2; i<=n; i++){
            sum += (i-1) * m + m;
        }
        cout<<sum<<'\n';
    }
}