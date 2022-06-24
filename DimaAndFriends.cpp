// https://codeforces.com/problemset/problem/272/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n;
    cin>>n;
    int players = n+1;
    int sum=0, inp=0;
    for(int i=0; i<n; i++){
        cin>>inp;
        sum+=inp;
    }
    int ans=0;
    for(int j=1; j<=5; j++){
        if((sum + j)% players != 1) ans++;
    }
    cout<<ans;
}