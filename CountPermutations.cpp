// https://codeforces.com/problemset/problem/1581/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    const int A = 1e9 + 7;
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        n=n*2;
        long long ans = 1;
        for(int i=3; i<=n; i++){
            ans = (ans *i)%A;
        }
        cout<<ans<<"\n";
    }    
}