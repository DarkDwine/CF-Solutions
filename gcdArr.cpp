// https://codeforces.com/problemset/problem/1629/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));


int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int l, r, k;
        cin>>l>>r>>k;
        if(l == r && l>1){
            cout<<"YES\n";
            continue;
        }
        else if(l == r && l==1){
            cout<<"NO\n";
            continue;
        }
        else {
            int p;
            if(l%2 == 0 && r%2 == 0) p = (r-l)/2 ;
            else p = (r-l)/2 + 1;
            if(k < p){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
    } 
}