// https://codeforces.com/problemset/problem/125/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    string s;
    cin>>s;
    int len = s.length();
    int i = 0, k = 1;
    while(k < len){
        if(s[k] >= 'a' && s[k] <= 'z'){
            for(int j = 0; j<2*i; j++) cout<<' ';
            cout<<s[k-1]<<s[k]<<s[k+1]<<'\n';
            k+=3;
            i++;
        }
        else if(s[k] = '/'){
            i--;
            for(int j = 0; j<2*i; j++) cout<<' ';
            cout<<s[k-1]<<s[k]<<s[k+1]<<s[k+2]<<'\n';
            k+=4;
        }
    }
}