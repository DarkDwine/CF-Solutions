// https://codeforces.com/contest/1694/problem/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long ans = n;
        long long i = 1;
        while(i != n){
            if(s[i] != s[i-1]){
                ans+=i;
            }
            i++;
        }
        cout<<ans<<'\n';
    }
}