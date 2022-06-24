// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        int siz = s.length();
        if(siz>10){
            cout<<"\n"<<s[0]<<siz-2<<s[siz-1];
        }
        else cout<<"\n"<<s;
    }
}