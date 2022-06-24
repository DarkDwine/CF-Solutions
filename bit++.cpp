// https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n;
    cin>>n;
    int ans=0;
    while(n--){
        string s;
        cin>>s;

        if(s[1]=='+'){
            ans++;
        }
        else if(s[1]=='-'){
            ans--;
        }
    }
    cout<<ans;
}