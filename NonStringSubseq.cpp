// https://codeforces.com/problemset/problem/1451/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        string s;
        cin>>s;
        while(q--){
            int l, r;
            cin>>l>>r;
            int chk = 0;
            int com = s[l-1];
            for(int i = 0; i<l-1; i++){
                if(s[i] == com){
                    chk = 1;
                    break;
                }
            }
            if(!chk){
                com = s[r-1];
                for(int j = r; j<n; j++){
                    if(s[j] == com){
                        chk = 1;
                        break;
                    }
                }
            }
            cout<< (chk==1 ? "YES" : "NO")<<"\n";
        }
    }
}