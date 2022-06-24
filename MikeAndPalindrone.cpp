// https://codeforces.com/contest/798/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    string s;
    cin>>s;
    int siz = s.size();
    siz--;
    int iter = siz/2;
    int change = 0;
    for(int i=0; i<=iter; i++){
        if(s[i] != s[siz-i]) change++;
    }
    if(change == 1 || siz == 0) cout<<"YES";
    else if(change == 0 && (siz+1)%2 == 1) cout<<"YES";
    else cout<< "NO";
}