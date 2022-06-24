// https://codeforces.com/contest/1694/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));
 
int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        while(a || b){
            if(a){
                cout<<0;
                a--;
            }
            if(b){
                cout<<1;
                b--;
            }
        }
        cout<<'\n';
    }
}