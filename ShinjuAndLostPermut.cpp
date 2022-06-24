// https://codeforces.com/contest/1658/problem/C

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

void solve(){
    int n; 
    cin>>n;
    vector<int> c(n);
    for(int &a : c){
        cin>>a;
    }

    if(count(c.begin(), c.end(), 1) != 1){
        cout<<"NO\n";
        return;
    }

    int q = find(c.begin(), c.end(), 1) - c.begin();
    rotate(c.begin(), c.begin() + q, c.end());

    for(int i = 1; i <n; i++){
        if(c[i] - c[i-1] > 1){
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
}
int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}