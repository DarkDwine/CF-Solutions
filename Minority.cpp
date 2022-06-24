// https://codeforces.com/contest/1633/problem/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int siz = s.length();
        int one=0;
        int zeroe=0;
        for(int i=0; i<siz; i++){
            if(s[i] == '1') one++;
            else zeroe++;
        }

        if(one<zeroe) cout<<one<<"\n";
        else if(zeroe<one) cout<<zeroe<<"\n";
        else if(siz>=4){
            if(s[0] == '0') cout<<zeroe-1<<"\n";
            if(s[0] == '1') cout<<one-1<<"\n";
        }
        else cout<<0<<"\n";
    }

}