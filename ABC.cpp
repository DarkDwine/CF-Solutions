// https://codeforces.com/contest/1632/problem/A

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
        if(n>=3) cout<<"NO\n";
        else if(n == 2){
            if(s[0] == s[1]) cout<<"NO\n";
            else cout<<"YES\n";
        }
        else cout<<"YES\n";
    }
}