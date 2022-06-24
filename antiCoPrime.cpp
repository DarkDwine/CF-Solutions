#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    long long mod = 998244353;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2 == 1) cout<<0<<'\n';
        else{
            long long ans = 1;
            n = n/2;
            for(int i = 2; i<=n; i++){
                ans = (ans * i) % mod;
            }
            ans = (ans * ans) % mod;
            cout<<ans<<'\n';
        }
    }
}