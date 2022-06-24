// https://codeforces.com/problemset/problem/1547/B

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
        string s;
        cin>>s;
        bool ans = true;
        int p = s.find('a');
        int n = s.length();
        if(p == string::npos){
            cout<<"NO\n";
            continue;
        }

            int q=p;
            int r;
            for(int i=1; i<n; i++){
                r = s.find(char('a' + i));
                if(r == string::npos || (r != p-1 && r != q+1)){
                    ans = false;
                    break;
                }
                else{
                    p=min(p,r), q=max(q,r);
                }
            }

        if(ans){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}