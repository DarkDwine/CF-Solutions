// https://codeforces.com/problemset/problem/1445/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int ans = max(a+b, c+d);
        cout<<ans<<"\n";
    }
}